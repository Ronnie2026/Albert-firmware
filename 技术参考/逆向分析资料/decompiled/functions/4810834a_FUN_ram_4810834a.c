/* Firmware entry: 0x4810834a */

void FUN_ram_4810834a(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char cStack_25;
  undefined4 auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((*(char *)(param_2 + 0x71) != '\0') && (*(char *)(param_2 + 0x75) != '\0')) &&
       (*(char *)(param_2 + 0x79) != '\0')) &&
      ((cVar1 = *(char *)(param_1 + 0xaf4), cVar1 == '\x01' ||
       ((*(char *)(param_2 + 1) == '\f' && ((cVar1 - 2U & 0xfd) == 0)))))) &&
     (((*(char *)(param_2 + 0x72) != '\0' || (*(char *)(param_1 + 0xba4) != '\0')) &&
      (((*(int *)(param_1 + 0xaf8) != 0 && ((uint)(param_3 - *(int *)(param_1 + 0xaf8)) < 0x12d)) &&
       ((*(char *)(param_1 + 0x911) != '\0' &&
        ((*(char *)(param_1 + 0x90f) != '\0' &&
         ((uint)(param_3 - *(int *)(param_1 + 0x908)) < 0x12d)))))))))) {
    cStack_25 = '\0';
    auStack_24[0] = 0x80000000;
    iVar3 = FUN_ram_48052348(param_1 + 0xa8c,param_1 + 0xa98,param_3,auStack_24,&cStack_25);
    if ((iVar3 != 0) && (cStack_25 == '\0')) {
      if (*(char *)(param_1 + 0xad2) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0xad0) != '\0') {
        uVar2 = FUN_ram_480523e8(param_1 + 0xad0,1,cVar1,1,auStack_24[0],
                                 *(undefined2 *)(param_2 + 0x86),*(undefined2 *)(param_2 + 0x86),
                                 param_3);
        *(undefined1 *)(param_1 + 0xae8) = uVar2;
        return;
      }
      *(undefined1 *)(param_1 + 0xad2) = 0;
      *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
      *(undefined1 *)(param_1 + 0xae0) = 0;
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(char *)(param_1 + 0xad4) = cVar1;
      *(undefined1 *)(param_1 + 0xad3) = uVar2;
      *(undefined4 *)(param_1 + 0xad8) = auStack_24[0];
      *(int *)(param_1 + 0xae4) = param_3;
      *(undefined **)(param_1 + 0xad0) = &sedeleg;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xad0) = 0;
  *(undefined1 *)(param_1 + 0xad4) = 0;
  *(undefined1 *)(param_1 + 0xae0) = 0;
  *(undefined4 *)(param_1 + 0xae4) = 0;
  *(undefined1 *)(param_1 + 0xae8) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0x80000000;
  *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
  return;
}


