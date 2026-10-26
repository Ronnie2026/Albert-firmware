/* Firmware entry: 0x48047e40 */

void FUN_ram_48047e40(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = (uint)*(ushort *)(param_1 + 0x1e);
  puVar6 = *(undefined **)(param_1 + 0x1c);
  if (10000 < *(undefined **)(param_1 + 0x1c)) {
    puVar6 = (undefined *)0x2710;
  }
  if (puVar6 < &pmpaddr56) {
    puVar6 = &pmpaddr56;
  }
  uVar7 = ZEXT24((undefined *)((short)puVar6 + 0x32)) / 100;
  iVar8 = uVar7 * 100;
  uVar7 = uVar7 * 0x640000 >> 0x10;
  if (uVar4 < 1000) {
    iVar2 = 1000;
    iVar3 = iVar2;
    uVar5 = 1000;
    iVar1 = iVar8;
    if (1000 < uVar7) goto LAB_ram_48047eb8;
  }
  else {
    iVar1 = 10000;
    iVar3 = iVar8;
    uVar5 = uVar7;
    if (10000 < uVar4) goto LAB_ram_48047eb8;
    uVar4 = (uVar4 + 0x32) / 100;
    iVar2 = uVar4 * 100;
    uVar5 = uVar4 * 0x640000 >> 0x10;
    iVar3 = iVar2;
    iVar1 = iVar8;
    if (uVar5 < uVar7) goto LAB_ram_48047eb8;
  }
  iVar3 = iVar8;
  uVar5 = uVar7;
  iVar1 = iVar2;
LAB_ram_48047eb8:
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 9) = 2;
  uVar5 = (param_3 % ((iVar1 - iVar3) / 100 + 1U & 0xffff)) * 100 + uVar5;
  *(uint *)(param_1 + 0x10) = param_2 + (uVar5 & 0xffff);
  *(short *)(param_1 + 0x20) = (short)(uVar5 * 0x10000 >> 0x10);
  return;
}


