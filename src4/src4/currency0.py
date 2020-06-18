import requests

def main():
    res = requests.get("http://data.fixer.io/api/latest?access_key=3cb419464dc8152576d36a1766082bf7")
    if res.status_code != 200:
        raise Exception("ERROR: API request unsuccessful.")
    data = res.json()
    print(data)

if __name__ == "__main__":
    main()
