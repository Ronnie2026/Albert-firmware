/* Firmware entry: 0x480345f4 */

void FUN_ram_480345f4(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)(param_2 * 0x50 + 0x3a00 + param_1);
  bVar1 = (byte)(1 << (param_2 & 0x1f));
  if ((((*piVar3 != 0 || piVar3[1] != 0) && (piVar3[2] != 0)) &&
      (uVar2 = (uint)*(ushort *)(piVar3 + 3), uVar2 < 0xce)) &&
     (iVar4 = uVar2 * 0x48 + param_1, (*(ushort *)(iVar4 + 0x56) & 1) != 0)) {
    iVar6 = *(int *)(iVar4 + 0x10);
    if (((((iVar6 != 0 || *(int *)(iVar4 + 0x14) != 0) &&
          (uVar5 = (uint)*(ushort *)(iVar4 + 0x4c), uVar5 < 0x1ff)) &&
         ((*piVar3 == iVar6 &&
          ((piVar3[1] == *(int *)(iVar4 + 0x14) && (piVar3[2] == (iVar6 << 9 | uVar5 + 1))))))) &&
        (uVar2 == uVar5)) &&
       ((iVar4 = uVar2 * 0x48 + param_1, -1 < *(int *)(iVar4 + 0x54) << 0xc &&
        (*(byte *)(iVar4 + 0x50) < 2)))) {
      *(byte *)(param_1 + 0x3bee) = *(byte *)(param_1 + 0x3bee) | bVar1;
      return;
    }
  }
  *(byte *)(param_1 + 0x3bee) = ~bVar1 & *(byte *)(param_1 + 0x3bee);
  return;
}


