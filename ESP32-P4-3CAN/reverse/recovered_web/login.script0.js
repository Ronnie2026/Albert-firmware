
const error=new URLSearchParams(location.search).get("error");
if(error)document.getElementById("error").textContent=error==="locked"?"尝试过多，请稍后再试。":"密码不正确，请重试。";
