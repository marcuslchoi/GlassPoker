
var animateTime = 1000;
var delayTime = 200;

var horizDistBtwnHands = 100;
var vertDistBtwnHands = 50;
var xDisplacement = horizDistBtwnHands;
var yDisplacement = 0;
var distBtwnHandCards = 20;

var imgArray = [];

for (var i = 0; i < stackSize; i++)
{
    imgArray[i] = "#img"+i;
}

var i = stackSize - 1;

loopDeal();

//calls itself every delayTime to deal next card
function loopDeal()
{
    setTimeout(function ()
    {
        dealCard(imgArray[i],xDisplacement,yDisplacement);
        i--;
        if (i >= stackSize - 18)
        {
            if (i == stackSize - 1 || i == stackSize - 10)
            {
               xDisplacement = horizDistBtwnHands;
               yDisplacement = 0;
               
               if (i == stackSize - 10)
               {
                    xDisplacement -= distBtwnHandCards;
               }
            }
            else if (i == stackSize - 2 || i == stackSize - 11)
            {
               xDisplacement += horizDistBtwnHands;
               yDisplacement += vertDistBtwnHands;
               
            }
            else if (i == stackSize - 3 || i == stackSize - 12)
            {
               //xDisplacement += horizDistBtwnHands;
               yDisplacement += vertDistBtwnHands;
               
            }
            else if (i == stackSize - 4 || i == stackSize - 13)
            {
               xDisplacement -= horizDistBtwnHands;
               yDisplacement += vertDistBtwnHands;
               
            }
            else if (i == stackSize - 5 || i == stackSize - 14)
            {
               xDisplacement -= horizDistBtwnHands;
               //yDisplacement += vertDistBtwnHands;

            }
            else if (i == stackSize - 6 || i == stackSize - 15)
            {
               xDisplacement -= horizDistBtwnHands;
               //yDisplacement += vertDistBtwnHands;
               
            }
            else if (i == stackSize - 7 || i == stackSize - 16)
            {
               xDisplacement -= horizDistBtwnHands;
               yDisplacement -= vertDistBtwnHands;
               
               if (i == stackSize - 16)
               {
                    xDisplacement += 2*distBtwnHandCards;
               }
            }
            else if (i == stackSize - 8 || i == stackSize - 17)
            {
               //xDisplacement -= horizDistBtwnHands;
               yDisplacement -= vertDistBtwnHands;
               
            }
            else if (i == stackSize - 9 || i == stackSize - 18)
            {
               xDisplacement += horizDistBtwnHands;
               yDisplacement -= vertDistBtwnHands;
               
            }
               
            loopDeal();
        }

    }, delayTime);
}

//pass the img[i], marginleft and margintop
function dealCard(imageId, marginleft, marginTop)
{
    $(imageId).velocity({
                        
        "marginLeft": marginleft.toString()+"px",
        "marginTop": marginTop.toString()+"px",
     
     }, animateTime);
}