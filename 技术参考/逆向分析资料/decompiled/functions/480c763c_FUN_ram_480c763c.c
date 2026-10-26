/* Firmware entry: 0x480c763c */

void FUN_ram_480c763c(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = ((int)param_1 + 0x49U & 3) << 3;
  puVar1 = (uint *)((int)param_1 + 0x49U & 0xfffffffc);
  uVar4 = *puVar1;
  *puVar1 = uVar4 & ~(0xff << iVar2) | param_2 << iVar2;
  if (param_2 != ((int)uVar4 >> iVar2 & 0xffU)) {
    param_1[0x1f] = param_1[0x1f] + 1;
    iVar2 = *param_1;
    piVar3 = (int *)(iVar2 + 0x5c4);
    do {
      iVar5 = *piVar3 + 1;
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      *piVar3 = iVar5;
      piVar3 = piVar3 + 0x2c;
    } while (piVar3 != (int *)(iVar2 + 0x7d4));
  }
  return;
}


