from subprocess import check_call

def test_hello_world():
    check_call("./hello.out > out.txt", shell=True)
    with open("out.txt") as f:
        assert f.read().strip() == "Hello, World!"

