﻿include 'timetest.as'var str = "asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj  asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj"+"asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj  asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj"+"asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj"+"regularexpressions@yahoo.com asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj"+"asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj"+"asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj asdfgf lkjhj";var regex = new RegExp(/([a-zA-Z0-9])+([\.a-zA-Z0-9_-])*@([a-zA-Z0-9])+(\.[a-zA-Z0-9_-]+)/m);function replace(loops) {     for (var i=0; i<loops; i++)         str.replace(regex,"regularexpression2@msn.com");}timetest(replace, 500, 200);