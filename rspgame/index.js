const buttons = document.querySelectorAll('button');
const computerChoice = documnet.querySelectorAll('.computer-choice');
const userChoice = document.querySelectorAll('.you-choice');
const winner = document.querySelectorAll('result');

const result = ['가위', '바위', '보'];

const show = (user, computer, result) => {
    computerChoice.innerText = computer;
    userChoice.innerText = user;
    winner.innerText = result;

};

const game = (user, computer) => {
    let message;

    if(user === computer) {
        console.log('무승부');
    } else {
        switch (user + computer) {
            case '가위보':
            case '바위가위':
            case '보바위':
                message = ('사용자 승리!');
                break;
            case '가위바위':
            case '바위보':
            case '보가위':
                message = ('컴퓨터 승리!');
                break;
        }
  
    }
    show(user, computer, message);
;}

const play = (event) => {
    const user = event.target.innerText;
    const randomIndex = Math.floor(Math.random()* 3);    console.log(event.target.innnerText);
    const computer = result[randomIndex];
    game(user,computer);
};

buttons.forEach((button) => {
    button.addEventListener('click', play);
});

Math.random()

