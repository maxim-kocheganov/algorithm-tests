from time import time
from time import sleep
import asyncio

async def asPrint(string):
    for s in range(1,4):
        await asyncio.sleep(1)
        print(string, s)

start = time()

prints = [
    asyncio.ensure_future(asPrint("lol")),
    asyncio.ensure_future(asPrint("kek")),
    asyncio.ensure_future(asPrint("cheburek"))
]

event_loop = asyncio.get_event_loop()
event_loop.run_until_complete(asyncio.gather(*prints))
event_loop.close()

print("{:1f}".format(time() - start))