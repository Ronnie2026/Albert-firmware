/* Firmware entry: 0x480cc7e2 */

void FUN_ram_480cc7e2(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 auStack_7c [3];
  byte bStack_79;
  char cStack_76;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_48;
  int iStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x7cc) == '\0') {
    return;
  }
  if ((((*(int *)(param_1 + 0x79c) == 0) &&
       ((((*(char *)(param_1 + 0x3e0) == '\0' || (*(int *)(param_1 + 0x3e4) != 0)) &&
         (FUN_ram_4804a1e6(auStack_7c,param_1 + 0x2b8,param_2), iStack_3c == 0)) &&
        ((cStack_74 == '\0' && (cStack_76 == '\0')))))) && (cStack_73 == '\0')) &&
     (((cStack_72 == '\0' && (cStack_48 == '\0')) && ((bStack_79 < 2 || (bStack_79 == 10)))))) {
    puVar3 = *(uint **)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x7cc) = 0;
    fence();
    uVar4 = *puVar3;
    while( true ) {
      uVar2 = uVar4 - 1;
      if (((int)uVar4 < 0) || ((uVar4 & 0xffff) == 0)) break;
      bVar1 = *puVar3 == uVar4;
      uVar4 = *puVar3;
      if (bVar1) {
        *puVar3 = uVar2;
        return;
      }
    }
  }
  return;
}


