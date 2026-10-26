/* Firmware entry: 0x4ff3f05e */

void FUN_ram_4ff3f05e(undefined4 param_1,undefined4 param_2)

{
  char **ppcVar1;
  char **__dest;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *__src;
  int iVar5;
  uint uVar6;
  char *local_68 [3];
  char *apcStack_5c [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_68[0] = "***ERROR*** A stack overflow in task ";
  local_68[2] = " has been detected.";
  local_68[1] = (char *)param_2;
  memset(apcStack_5c,0,0x4b);
  ppcVar1 = local_68;
  __dest = apcStack_5c;
  do {
    __src = *ppcVar1;
    ppcVar1 = ppcVar1 + 1;
    __dest = (char **)strcat((char *)__dest,__src);
  } while (apcStack_5c != ppcVar1);
  iVar2 = FUN_ram_4ff36e40(apcStack_5c);
  if (*(int *)(iVar2 + 0x60) != 0) {
    iVar3 = FUN_ram_4ff30526();
    if (iVar3 == 0) {
      if (DAT_ram_4ff47dac != 0) {
        uVar4 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Fatal error: TLSP deletion callback at index %d overwritten with non-excutable pointer %p\n"
                   ,uVar4,"FreeRTOS",0,*(undefined4 *)(iVar2 + 0x60));
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    (**(code **)(iVar2 + 0x60))(0,*(undefined4 *)(iVar2 + 0x5c));
  }
  uVar6 = *(int *)(iVar2 + 0x48) - 0x18U & 0xfffffff0;
  if (*(int *)(uVar6 + 8) != 0) {
    iVar3 = *(int *)(iVar2 + 0x44);
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(uVar6 + 4);
    if (iVar3 != 0x7fffffff) {
      iVar5 = 0;
      do {
        if (iVar2 == *(int *)(&DAT_ram_4ff59e80 + (iVar3 * 3 + iVar5) * 4)) {
          *(int *)(&DAT_ram_4ff59e80 + (iVar3 * 3 + iVar5) * 4) = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
    }
  }
  return;
}


