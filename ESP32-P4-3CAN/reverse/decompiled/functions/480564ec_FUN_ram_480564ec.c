/* Firmware entry: 0x480564ec */

void FUN_ram_480564ec(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x8e) == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (500 < (uint)(param_2 - *(int *)(param_1 + 0x48))) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(char *)(param_1 + 0x8a) != '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar4 = *(uint *)(param_1 + 0x4c);
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    if (*(char *)(param_1 + 0x86) == '\0') {
      if (uVar1 == 0) goto LAB_ram_48056552;
      uVar4 = 0;
      uVar2 = uVar1;
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0x7c);
      uVar4 = (uint)*(byte *)(param_1 + 0x83);
      iVar5 = 0;
      if ((uVar3 != 0) && (uVar3 * 100 < uVar2)) {
        uVar2 = ((uVar2 + uVar3 * -100) * uVar4 + (uVar3 - 1)) / uVar3;
        if (*(byte *)(param_1 + 0x84) < uVar2) {
          uVar2 = (uint)*(byte *)(param_1 + 0x84);
        }
        iVar5 = uVar2 * uVar3;
      }
      uVar4 = ((uVar4 - 1) + iVar5) / uVar4 + uVar3 * 100;
      uVar2 = uVar1 - uVar4;
      if (uVar1 <= uVar4) {
        uVar2 = uVar4 - uVar1;
        uVar3 = 100;
        goto LAB_ram_4805652e;
      }
    }
    uVar3 = 100;
  }
  else {
    uVar2 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar2 = uVar1 - uVar4;
    }
    uVar3 = (-(uint)(*(char *)(param_1 + 0x95) == '\0') & 0xffffffe1) + 0x51;
  }
LAB_ram_4805652e:
  if (uVar3 < uVar2) {
    *(int *)(param_1 + 100) = param_2;
    *(uint *)(param_1 + 0x68) = uVar1;
    *(uint *)(param_1 + 0x6c) = uVar4;
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
LAB_ram_48056552:
  *(undefined1 *)(param_1 + 0x91) = 1;
  return;
}


