// 1. 박스 2개 만들기 
// 2. 드롭다운 리스트 만들기 
// 2-1. 환율정보 가져오기 
// 3. 드롭다운 리스트에서 아이템을 선책할 경우, 해당 아이템으로 바뀜
// 4. 금액을 입력하면 환전됨. 
// 5. 드롭다운 리스트에서 아이템을 변경할 경우, 다시 그 아이템 기준으로 환전됨. 
// 6. 숫자를 한국어로 읽어주기 
// 7. 아래 박스에서 숫자를 변경해도 위 박스에 환율이 적용됨. 

let currencyRatio = {
    USD:{
        KRW: 1233.50,
        USD: 1,
        VND: 23450.00,
        unit: "달러"
    },
    KRW:{
        KRW: 1,
        USD: 0.00081,
        VND: 19.01,
        unit: "원"
    },
    VND:{  
        KRW: 0.053,
        USD: 0.000043,
        VND: 1,
        unit: "동"
    }
}// 환율정보 변수 선언

let fromCurrency = "USD";
let toCurrency = "USD";

document.querySelectorAll("#from-currency-list a").forEach((menu)=>menu.addEventListener("click",function(){
    //1.버튼 가져오기 
    //2.버튼값 바꾸기 
    //3.선택된 currency값 저장하기 
    document.getElementById("from-button").textContent=this.textContent;
    fromCurrency = this.textContent;
    console.log("fromcurrency는", fromCurrency);
    convert()

})
); //from-currency-list 내에 a태그에 적용한다.

document.querySelectorAll("#to-currency-list a").forEach((menu)=>menu.addEventListener("click", function() {
     document.getElementById("to-button").textContent = this.textContent;
     toCurrency = this.textContent;
     convert()
})
);

//키를 입력하는 순간, 환전이 되서, 환전된 값이 보임. 

function convert() {
   let amount = document.getElementById("from-input").value;
   let convertedAmount = amount * currencyRatio[fromCurrency][toCurrency];
   console.log("환전 결과!", convertedAmount);
   document.getElementById("to-input").value = convertedAmount;
}

//드롭다운 리스트의 값이 바뀔때마다 환전을 다시 함. 
