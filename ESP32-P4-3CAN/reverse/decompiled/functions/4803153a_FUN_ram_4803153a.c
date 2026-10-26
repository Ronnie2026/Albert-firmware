/* Firmware entry: 0x4803153a */

void FUN_ram_4803153a(byte *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = (uint)*param_1;
  uVar3 = *(ushort *)(param_1 + 2);
  uVar4 = *(ushort *)(param_1 + 4);
  if (uVar6 < 4) {
    if (uVar6 != 3) {
      iVar7 = uVar6 * 6;
      uVar1 = *(undefined2 *)(&DAT_ram_48222c70 + iVar7);
      uVar2 = *(undefined2 *)(&DAT_ram_48222c72 + iVar7);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&DAT_ram_48222c74 + iVar7);
      *(undefined2 *)(param_1 + 2) = uVar1;
      *(undefined2 *)(param_1 + 4) = uVar2;
      return;
    }
  }
  else {
    *param_1 = 3;
  }
  if (0x1ff < uVar3) {
    uVar3 = 0x1ff;
  }
  if (0x1ff < uVar4) {
    uVar4 = 0x1ff;
  }
  uVar5 = (ushort)param_1[6];
  if (6 < param_1[6]) {
    uVar5 = 6;
  }
  *(ushort *)(param_1 + 2) = uVar3;
  *(ushort *)(param_1 + 4) = uVar4;
  *(ushort *)(param_1 + 6) = uVar5 | (ushort)param_1[7] << 8;
  return;
}


