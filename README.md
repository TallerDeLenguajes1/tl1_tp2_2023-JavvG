# Trabajo Práctico Nro. 2

_2.f. ¿Puede ver el archivo tp2_1_2.c? ¿Por qué?_

El archivo *tp2_1_2.c* no es visible porque éste se encuentra en una rama distinta a la que se está visualizando en el explorador de archivos. Es decir, si en el explorador de archivos se visualiza la rama *main* (_git checkout main_) y se hace commit del archivo en una rama secundaria, el archivo no será visible en el explorador. En cambio, si se cambia de rama usando _git checkout second-brench_, en el explorador se podrá observar esa rama, y en consecuencia el archivo vuelve a ser visible.

