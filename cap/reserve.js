const form = document.querySelector("form");
const resultDiv = document.getElementById("result");

form.addEventListener("submit", (event) => {
  event.preventDefault();
  const date = form.date.value;
  const time = form.time.value;
  const location = form.location.value;
  const guests = form.guests.value;
  const url = `https://example.com/search?date=${date}&time=${time}&location=${location}&guests=${guests}`;

  fetch(url)
    .then((response) => response.json())
    .then((data) => {
      resultDiv.innerHTML = "";
      data.forEach((item) => {
        const div = document.createElement("div");
        div.textContent = item.name;
        resultDiv.appendChild(div);
     
