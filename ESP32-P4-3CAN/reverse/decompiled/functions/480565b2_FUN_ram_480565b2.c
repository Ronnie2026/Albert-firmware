/* Firmware entry: 0x480565b2 */

void FUN_ram_480565b2(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(param_1 + 0x4c);
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (*(uint *)(param_1 + 0x3c) < uVar1) {
    uVar2 = uVar1;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  if (uVar2 != *(uint *)(param_1 + 0x50)) {
    *(uint *)(param_1 + 0x50) = uVar2;
    *(undefined1 *)(param_1 + 0x87) = 0;
    iVar3 = *(int *)(param_1 + 0x38) + 1;
    uVar4 = uVar2;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else {
      *(int *)(param_1 + 0x38) = iVar3;
    }
  }
  *(bool *)(param_1 + 0x89) = uVar1 < uVar4;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  if ((uint)*(ushort *)(param_1 + 0x7c) * 100 <= uVar4) {
    uVar2 = (uint)*(byte *)(param_1 + 0x83);
    if (((int)((ulonglong)uVar4 * (ulonglong)uVar2 >> 0x20) == 0) &&
       (uVar4 * uVar2 <=
        (uVar2 * 100 + (uint)*(byte *)(param_1 + 0x84)) * (uint)*(ushort *)(param_1 + 0x7c))) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x8a) = 1;
  return;
}


