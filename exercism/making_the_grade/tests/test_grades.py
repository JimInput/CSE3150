import subprocess

def run_program():
    result = subprocess.run(["./making_the_grade"], capture_output=True, text=True, check=True)
    return result.stdout.strip().splitlines()

def test_round_down():
    output = run_program()
    assert "90.33 40.5 55.44 70.05 30.55 25.45 80.45 95.3 38.7 40.3" in output[0]
    assert "90 40 55 70 30 25 80 95 38 40" in output[1]

def test_num_fail():
    output = run_program()
    assert "5" in output[2]

def test_range():
    output = run_program()
    assert "41 53 65 77" in output[3]

def test_student_ranking():
    output = run_program()
    assert "1. Joci: 100 2. Sara: 99 3. Kora: 90 4. Jan: 84 5. Indra: 66 6. Bern: 53 7. Fred: 47" in output[4]

def test_perfect_score():
    output = run_program()
    assert "Joci" in output[5]
