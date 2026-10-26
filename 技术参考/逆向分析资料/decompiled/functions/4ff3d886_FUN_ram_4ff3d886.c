/* Firmware entry: 0x4ff3d886 */

int FUN_ram_4ff3d886(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar5 = 0;
  if (DAT_ram_4ff6da2c <= param_2) {
    puVar6 = &DAT_ram_4ff58e04;
    iVar4 = 0x19;
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar4 = iVar4 + -1;
      iVar1 = (iVar3 + iVar5) * 8 + param_1;
      if (*(int *)(&DAT_ram_4ff58c24 + iVar4 * 0x14) != 0) {
        iVar3 = FUN_ram_4ff3d7f2(iVar1,puVar6,1);
        iVar5 = iVar5 + iVar3;
        iVar3 = iVar5 * 4;
        iVar1 = iVar5 * 0x28 + param_1;
      }
      puVar6 = puVar6 + -5;
    } while (iVar4 != 0);
    if (*DAT_ram_4ff6da38 != 0) {
      iVar3 = FUN_ram_4ff3d7f2(iVar1,DAT_ram_4ff6da38,2);
      iVar5 = iVar5 + iVar3;
      iVar1 = param_1 + iVar5 * 0x28;
    }
    if (*DAT_ram_4ff6da34 != 0) {
      iVar3 = FUN_ram_4ff3d7f2(iVar1,DAT_ram_4ff6da34,2);
      iVar5 = iVar5 + iVar3;
      iVar1 = param_1 + iVar5 * 0x28;
    }
    if (DAT_ram_4ff58bc0 != 0) {
      iVar3 = FUN_ram_4ff3d7f2(iVar1,&DAT_ram_4ff58bc0,4);
      iVar5 = iVar5 + iVar3;
      iVar1 = param_1 + iVar5 * 0x28;
    }
    if (DAT_ram_4ff58bac != 0) {
      iVar3 = FUN_ram_4ff3d7f2(iVar1,&DAT_ram_4ff58bac,3);
      iVar5 = iVar5 + iVar3;
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar2 = FUN_ram_4ff21a0a();
      *param_3 = uVar2;
    }
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return iVar5;
}


