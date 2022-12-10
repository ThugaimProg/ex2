// FILE INCLUSION ---------------------------------------------------------------------------------
#include <iostream>                                                         // Pour cout et cin
#include <string>                                                           // Pour utiliser les chaînes de caractères
using namespace std;                                                        // Pour éviter d'écrire std:: devant les fonctions

// FUNCTION calculEpargne -------------------------------------------------------------------------
double calculEpargne(double salaire){                                       // Début de la fonction calculEpargne()
    double epargne;                                                             // Déclaration de la variable epargne
    epargne = salaire - (salaire * 0.8) - (salaire * 0.1225);                   // Calcul de l'épargne
    cout << epargne << " $"<< endl;                                                    // Affiche l'épargne        
    return epargne;                                                             // Retourne l'épargne
}                                                                           // Fin de la fonction calculEpargne()

// MAIN FUNCTION ----------------------------------------------------------------------------------
int main(){                                                                 // Debut de la fonction main()
    double salaire;                                                             // Déclaration de la variable salaire
    cout << "Quel est votre salaire? ";                                         // Demande le salaire
    cin >> salaire;                                                             // Stocke le salaire dans la variable salaire
    return calculEpargne(salaire);                                              // Retourne l'épargne
}                                                                            // Fin de la fonction main()

// END OF FILE -------------------------------------------------------------------------------------
//                                                                                                                              
// ..                                                                                       ..                                 
// ..                                                                                     ..'.                                 
//  ..  .                          .     .     ...                                     .....           ..                      
//   '...                          'c,  .,.      .,'.                            .,'....               ..                      
//   .,;'                            .'.:c.        ..'.                        .cOkc..       .         .                       
//    .ld.                             ;Od.         ..:ol,                    .cd:.         ',        ..             ..        
//     .;,.   ..        ...            .OO.         .,,:ldl'  ;c:,....       .;;. ....      .        ..           ....         
//        .:;..;'        :o,.          '0k.               .;cdo,.....      .cdc'.....      ,'       ..           ...           
//          ,c:ld,       .,.:c.         ld.                .:cl;..    ..'ood,.            ';.      ..           .;.            
//            .:kOl.     .'  ,dc.  :l.  ;d.       ..      ,,. .,:c:,'',,.              ...        ';'            .;;:;.         
//             .:k0o.        cKk;'c0x. .xl      .'.    .;'  .''';cl:.       .,,.   .cc'.''..    ':.           ....:c.         
//                .:kO,        .;:lod0o. cO,   ..';    'dl:::;..    .::.     ,'    ,xxc,oO:      ,;        ...     ..          
//                  .ok'             ;kc .do.  ;dx;   :KXxc'          :l;,.  ;c. .od,   'l.      ;;      ...        .          
//                   .dx.             oO:.;kl   lKc  cXNl     .';,.    c0:   lX0dOO,    .,.      :,    .'.                     
//                   .xx.          .:0WXxdXXc  .xo.:XMWo    ,kNWNOc.  .kl  .OWXXWx.     .      .c,oo;',.                       
//                .,,.'kk.        .dXXN0,'kN0;  ;d;xWNWK,   ,0WNNNWO:. ox. .kWko00:     .      .o:.,'                         
//                 .xXOdONO,      .kNx:    .lXk. .kKN0oONl   .ON0k0WNX0dkKc .dWOxxloc.          'Od'.  ....                    
//                .;;,,;cdkOc.    oNK,       lx. .xWNd.cX0,  .kXd   lc0WNNx. oN0kk,.cc.    ..  .dx'.''.'.                      
//          .lc:;;,.       ,dxl' 'OWd.        ;. .kW0, '0Wx. '0Kk  OkKO:cx, lNklx;  ,ll;'..  .lk:..'.                         
//           ;do,          .,codxONNc           cXW0o:oKWXc .ONK0KWWKl.  ;:.lNOlkc   .xo.   .oo'                              
//         .,;.           o.   .cKWX:          :KWKoxdc0NN0,.kWNXXWW0'   .cokNOcxl    ';   .ol.                               
//         ..           'd.      :KNc        o lkWNo.:; :kKNo.dKkcdWWNo.   .lkK0cdd.    .  .ol.                                
//                     ,x,       .oNx.      .kXKXN0, ;' .:dXk.l0d:oNWNXd'    ;0O;ox.      .dx'                                 
//                     ,d'        .kK:      oNNNNNo  .. .,:OXlo0kco0dd0X0l.  ,00:ck,     .o0o;;;;ldo,                          
//                     .c.         .x0lo ..cKWWWWX;      ,;cXXXX0oxK: 'oKNO:.,OXocOc     ,0d.    .:odc'                        
//                     .;.          .l0XNOx.'.WWWk.  ..  ;:'kWWWNKKNk.  'dXN0OXN0OX0c,,,;xKc         ';;.   .'' .  .,:;'.        
//                     .:.            ,O0d;   NXo.      ''.oNWNX00NK;    ,dKN0dddxxkkxxO00k;          .':od:. ...,:xOd:.      
//                     ,c.           'do.    ;okKd.      .. ;O000c.d0;      'dl.        ...l0x,          ,0x.       ':..,,.    
//                    ;kc           ,xl.    .: xk.       . ':,lx; .ll.      .l;            'oko'        .ol        ..   .;'   
//                   ,cl,          .o:       .  ;x,         .. .c,  .c;       .l,             .oOc.       cd.              '.  
//                  'c.,;          ;c.          .oo.        .. .;,.  'd;       ;d,            'dKKk:.     ;d:.              .. 
//                 .d: ;c.        .l,           .oKd.        ..'ll.  .lc       .xKl.         'OX0dc'      .......              
//                 l0; ,l.        cd.           .cdx,          .;;.   ,:.       oXOl,.       .d0l.         .   .....           
//                 cx' ,l.       .dx.           :, ;l.          .'.   ':.      'OXl.cc.       .:d;                .'..         
//                 .c'  .        'Ok.          .;.  cdc:,.       ..   .,       ;Kk'  ''         .;,.                           
//                  :,           :KKd;.        ..   .oo o:.           ';       ,k;    '.          .'.                          
//                  ,:           .lxkkk,            ,,               ,;       :k,    ...           ',.                        
//                 .;.             ...;oc.          .'.             ,o'       :k'     ..            .,,.                      
//                  ''                 .:c.          ..            .:d,       'd;      .              'c;                     
//                  .'.                 .c:          .:'          .'.;:       .lc                      .c:.                   
//                   ,,                  .l'          ..          .. .:.       ;l.                       .;,.                 
//                    .:.                  cl.                        .;.       .o,                         ,'                 
//                     cd.                 .dc                         '.       .l:                         .'.                
//                     .'.                  :o.                        '.        ;c.                         .'                
//                                          .c,                        ',        'c.                         .,.               
//                                           ':.                       ,:.       .:'                         .;.               
//                                            ''                       ',         .'                         .;.               
//                                             '.                      ..          .                         .,.               
//                                             .'.                     ..                                     ''               
//                                              .,.                    ..                                     .'               
//                                               ',                     .                                      .               
//                                                                     ..                                     .               
//                                                                      ..                                                     
//                                                                      ..                                                     
//                                                                       .                                                                                                                                                                                                                                                                                                     
