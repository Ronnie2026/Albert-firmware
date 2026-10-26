/* Firmware entry: 0x4804cf26 */

void FUN_ram_4804cf26(int param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar3 = *(char *)(param_1 + 0x66);
  iVar5 = (int)cVar3;
  sVar1 = *(short *)(param_1 + 0x12);
  sVar2 = *(short *)(param_1 + 0x14);
  if (iVar5 == 0) {
    if (sVar2 == 0) {
      if (sVar1 == 0) goto LAB_ram_4804cf64;
      cVar3 = '\x01';
      goto LAB_ram_4804cf7e;
    }
    cVar3 = -1;
    if (sVar1 != 0) {
LAB_ram_4804cf64:
      *(undefined1 *)(param_1 + 0x88) = 0;
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      return;
    }
LAB_ram_4804cf3a:
    *(char *)(param_1 + 0x88) = cVar3;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(short *)(param_1 + 0x8c) = sVar2;
    *(undefined2 *)(param_1 + 0x8e) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
joined_r0x4804cf96:
    if (sVar1 != 0) {
      uVar4 = 3;
      goto LAB_ram_4804cf56;
    }
  }
  else {
    if (iVar5 < 0) {
      if (sVar2 != 0) goto LAB_ram_4804cf3a;
      iVar5 = iVar5 * -0x1000000 >> 0x18;
      if (iVar5 < 0) {
        iVar5 = 1;
      }
      cVar3 = (char)iVar5;
      if (sVar1 == 0) goto LAB_ram_4804cf64;
LAB_ram_4804cf7e:
      *(char *)(param_1 + 0x88) = cVar3;
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(short *)(param_1 + 0x8c) = sVar1;
      *(undefined2 *)(param_1 + 0x8e) = 0;
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      sVar1 = sVar2;
      goto joined_r0x4804cf96;
    }
    if (sVar1 != 0) goto LAB_ram_4804cf7e;
    if (sVar2 == 0) goto LAB_ram_4804cf64;
    *(char *)(param_1 + 0x88) = -cVar3;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(short *)(param_1 + 0x8c) = sVar2;
    *(undefined2 *)(param_1 + 0x8e) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
  }
  uVar4 = 4;
LAB_ram_4804cf56:
  *(undefined1 *)(param_1 + 0x58) = uVar4;
  return;
}


