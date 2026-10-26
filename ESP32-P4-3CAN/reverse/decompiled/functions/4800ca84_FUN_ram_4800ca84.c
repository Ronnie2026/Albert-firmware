/* Firmware entry: 0x4800ca84 */

void FUN_ram_4800ca84(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47e34,0xffffffff);
  if (0 < DAT_ram_4ff6db08) {
    iVar1 = 0;
    do {
      while (puVar5 = *(undefined4 **)(DAT_ram_4ff6db0c + iVar1 * 4), puVar5 == (undefined4 *)0x0) {
LAB_ram_4800caca:
        iVar1 = iVar1 + 1;
        if (DAT_ram_4ff6db08 <= iVar1) goto LAB_ram_4800cb20;
      }
      if (param_1 == 1) {
        if ((puVar5[7] & 1) != 0) {
          puVar4 = (uint *)puVar5[3];
          goto LAB_ram_4800cafc;
        }
        goto LAB_ram_4800caca;
      }
      if (param_1 != 2) {
        if ((param_1 == 0) && ((puVar5[5] & 1) != 0)) {
          puVar4 = (uint *)puVar5[2];
          goto LAB_ram_4800cafc;
        }
        goto LAB_ram_4800caca;
      }
      if ((puVar5[9] & 1) == 0) goto LAB_ram_4800caca;
      puVar4 = (uint *)puVar5[4];
LAB_ram_4800cafc:
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      iVar1 = iVar1 + 1;
      *puVar4 = *puVar4 | 1;
      FUN_ram_4800eab8(uVar2,uVar3,param_2);
    } while (iVar1 < DAT_ram_4ff6db08);
  }
LAB_ram_4800cb20:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47e34);
  return;
}


