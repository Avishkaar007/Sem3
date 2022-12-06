# Initialize variables
window_size = 5  # size of the window
buffer = []  # buffer to hold packets
window = []  # window to hold packets ready to be sent
acks = []  # list of acknowledgements received

# Function to send a packet
def send_packet(packet):
    # Send packet
    print("Sending packet: ", packet)

    # Add packet to window
    window.append(packet)

    # Wait for acknowledgement
    ack = input("Received acknowledgement for packet {}? (y/n)".format(packet))

    # If acknowledgement received, remove packet from window and add acknowledgement to list
    if ack == "y":
        window.pop(0)
        acks.append(packet)

    # If no acknowledgement received, resend packet
    else:
        send_packet(packet)


# Function to add packet to buffer and send if window not full
def add_to_buffer(packet):
    buffer.append(packet)
    if len(buffer) == window_size:
        send_packet(buffer[0])


# Function to check if all packets have been acknowledged
def all_acks_received():
    # Sort acknowledgements in ascending order
    acks.sort()

    # Loop through acknowledgements
    for i in range(len(acks)):
        # If acknowledgement not equal to expected value, return False
        if acks[i] != i + 1:
            return False

    # If all acknowledgements received, return True
    return True


# Function to send all remaining packets in buffer
def send_remaining_packets():
    # Loop through remaining packets in buffer
    for i in range(len(buffer)):
        # Send packet
        send_packet(buffer[i])

        # If all acknowledgements not received, break loop
        if not all_acks_received():
            break


# Example usage
add_to_buffer(1)
add_to_buffer(2)
add_to_buffer(3)
add_to_buffer(4)
add_to_buffer(5)
send_remaining_packets()
