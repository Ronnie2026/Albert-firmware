/* Firmware entry: 0x48121d8c */

undefined4 FUN_ram_48121d8c(char *param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_2 != 1) {
    uVar1 = 0;
    if (*param_2 == 2) {
      cVar2 = '=';
      if (*(byte *)(param_2 + 1) < 0x40) {
        cVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [*(byte *)(param_2 + 1)];
      }
      uVar1 = 2;
      *param_1 = cVar2;
      param_1[1] = '=';
      param_1 = param_1 + 2;
    }
    *param_1 = '\0';
    return uVar1;
  }
  cVar2 = '=';
  if (*(byte *)(param_2 + 1) < 0x40) {
    cVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            [*(byte *)(param_2 + 1)];
  }
  *param_1 = cVar2;
  param_1[1] = '=';
  param_1[2] = '=';
  param_1[3] = '\0';
  return 3;
}


