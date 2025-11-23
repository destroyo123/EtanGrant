import asyncio
import serial
import websockets

SERIAL_PORT = "COM28"       # Change this to your XBee port
BAUD = 9600

ser = serial.Serial(SERIAL_PORT, BAUD, timeout=0.1)

async def handler(websocket):
    while True:
        if ser.in_waiting:
            line = ser.readline().decode().strip()
            await websocket.send(line)
        await asyncio.sleep(0.01)

async def main():
    async with websockets.serve(handler, "localhost", 8765):
        print("Websocket server running on ws://localhost:8765")
        await asyncio.Future()  # run forever

asyncio.run(main())

