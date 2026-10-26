/* Firmware entry: 0x4ff42d22 */

uint FUN_ram_4ff42d22(int *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *param_1;
  uVar3 = param_1[1];
  uVar4 = *(uint *)(iVar5 + 0xc);
  uVar6 = *(uint *)(iVar5 + 8);
  uVar1 = 0;
  if ((uVar4 & 4) != 0) {
    if ((uVar6 & 0x80) == 0) {
      if ((uVar6 & 0x40) == 0) {
        if ((uVar3 & 2) == 0) {
          uVar3 = uVar3 & 0xfffffffb;
          uVar1 = 0x10;
        }
        else {
          uVar3 = uVar3 & 0xffffffed;
          uVar1 = 0x42;
        }
      }
      else {
        uVar3 = uVar3 | 4;
        uVar1 = 8;
      }
    }
    else {
      uVar1 = 4;
      if ((uVar6 & 0x40) != 0) {
        uVar3 = uVar3 & 0xffffffde | 0x10;
        uVar1 = 0x81;
      }
    }
  }
  uVar1 = uVar1 | (uVar4 & 1) << 9;
  if ((uVar4 & 2) != 0) {
    uVar3 = uVar3 & 0xffffffdf;
    if ((uVar6 & 8) == 0) {
      uVar1 = uVar1 | 0x400;
    }
    else {
      uVar1 = uVar1 | 0x1400;
    }
  }
  if ((uVar4 & 0x20) != 0) {
    if ((*(uint *)(iVar5 + 0x3c) | *(uint *)(iVar5 + 0x38)) < 0x80) {
      uVar1 = uVar1 | 0x40;
      uVar3 = uVar3 & 0xfffffff7;
    }
    else {
      uVar1 = uVar1 | 0x20;
      uVar3 = uVar3 | 8;
    }
  }
  uVar6 = uVar4 & 0x40;
  if ((uVar4 & 0x80) == 0) {
    param_1[1] = uVar3;
    uVar3 = uVar1 & 0x80;
    if (uVar6 == 0) {
      if (uVar3 == 0) {
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
        return uVar1;
      }
      bVar2 = 0;
    }
    else {
      uVar1 = uVar1 | 0x100;
      if (uVar3 == 0) {
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
        return uVar1;
      }
      bVar2 = 1;
      uVar6 = 0x100;
    }
  }
  else if (uVar6 == 0) {
    uVar1 = uVar1 | 0x80;
    param_1[1] = uVar3;
    bVar2 = 0;
  }
  else {
    uVar1 = uVar1 | 0x180;
    param_1[1] = uVar3;
    bVar2 = 1;
    uVar6 = 0x100;
  }
  uVar4 = *(uint *)(iVar5 + 0x30);
  uVar3 = uVar4 >> 6 & 3;
  *(byte *)(param_1 + 4) =
       (uVar3 == 1) << 2 | (uVar3 == 0) << 1 | (uVar3 == 2) << 3 | *(byte *)(param_1 + 4) & 0xf1;
  *(byte *)(param_1 + 4) =
       bVar2 | (uVar3 == 3 && (uVar4 & 0x1f) == 0x19) << 4 | *(byte *)(param_1 + 4) & 0xee;
  if (uVar6 != 0) {
    return uVar1;
  }
  return uVar1;
}


