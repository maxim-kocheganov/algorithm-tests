from pydantic import BaseModel, ValidationError

class Tag(BaseModel):
    id: int
    name: str

class City(BaseModel):
    city_id: int
    name: str
    tags: list[Tag]

city = City.parse_raw(
    """{"city_id": 123, "name": "Moscow", "tags":[
        {"id":10,
        "name": "lol"}
    ]}"""
)
print(city)
print(city.name)

city2 = None

try:
    city2 = City.parse_raw("""{"city_id": 123, "name": "Moscow", "population":"ddf"}""")
except ValidationError as e:
    print(e.json())