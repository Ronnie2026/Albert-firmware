/* Firmware entry: 0x4805777e */

int FUN_ram_4805777e(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0xc) != '\0') && (uVar3 = *(uint *)(param_1 + 8), uVar3 != 0)) {
    iVar4 = 100000;
    if (*(char *)(param_1 + 0x6f) != '\0') {
      iVar4 = 0x274a6;
    }
    uVar5 = uVar3 * 1000 - 1;
    uVar2 = uVar5 + iVar4;
    uVar6 = __udivdi3(uVar2,((int)((ulonglong)uVar3 * 1000 >> 0x20) - (uint)(uVar3 * 1000 == 0)) +
                            (uint)(uVar2 < uVar5),iVar4,0);
    uVar3 = (uint)uVar6;
    if (((int)((ulonglong)uVar6 >> 0x20) != 0) || (0xff < uVar3)) {
      uVar3 = 0xff;
    }
    return (uVar3 & 0x7fff) << 1;
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    iVar4 = 50000;
    uVar3 = 100000;
  }
  else {
    iVar4 = 0x13a53;
    uVar3 = 0x274a6;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = ((uint)*(byte *)(param_1 + 1) * 1000 + 100000) * (uint)*(ushort *)(param_1 + 0x48);
  }
  else {
    iVar1 = *(int *)(param_1 + 8) * 1000;
  }
  uVar3 = (uint)(iVar1 + iVar4) / uVar3;
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  return (uVar3 & 0x7fff) << 1;
}


