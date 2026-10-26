/* Firmware entry: 0x480409ae */

/* WARNING: Type propagation algorithm not settling */

uint FUN_ram_480409ae(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = (uint)*(byte *)((int)param_1 + 0xd);
  if (uVar1 == 1) {
    bVar4 = *(byte *)(param_1 + 1);
    if (8 < bVar4) {
      return 0;
    }
    if (param_2 == 0x11) {
      return 0x11;
    }
    if ((param_3 == 0) || (param_3 == 0xc)) {
      iVar2 = *param_1;
    }
    else {
      if (1 < (param_3 - 0xdU & 0xff)) {
        return 0;
      }
      iVar2 = *param_1;
    }
    if (iVar2 != 0x3fd) {
      if (iVar2 == 0x399) {
        if (bVar4 != 8) {
          return 0;
        }
        uVar1 = 4;
      }
      else if (iVar2 == 0x293) {
        if (bVar4 != 8) {
          return 0;
        }
        uVar1 = 0x13;
      }
      else if (iVar2 == 0x334) {
        uVar1 = 5;
        if (bVar4 != 8) {
          return 0;
        }
      }
      else {
        if (iVar2 != 0x4f3) {
          return 0;
        }
        if (1 < (byte)(bVar4 - 3)) {
          return 0;
        }
        uVar1 = 0xd;
      }
      goto LAB_ram_48040a30;
    }
    if (bVar4 != 8) {
      return 0;
    }
    bVar4 = *(byte *)((int)param_1 + 5) & 7;
    bVar3 = *(byte *)((int)param_1 + 5) & 7;
    if (bVar3 == 1) {
      uVar1 = 2;
      goto LAB_ram_48040a30;
    }
    if (bVar3 != 2) {
joined_r0x48040a2e:
      if (bVar4 != 0) {
        return 0;
      }
      goto LAB_ram_48040a30;
    }
LAB_ram_48040b44:
    uVar1 = 3;
    goto LAB_ram_48040a30;
  }
  if (uVar1 != 2) {
    if (uVar1 != 4) {
      return 0;
    }
    if (8 < *(byte *)(param_1 + 1)) {
      return 0;
    }
    if (param_2 == 0x11) {
      return 0x11;
    }
    if (((param_3 != 0) && (param_3 != 0xc)) && (1 < (param_3 - 0xdU & 0xff))) {
      return 0;
    }
    if (*(byte *)(param_1 + 1) != 8) {
      return 0;
    }
    if (*param_1 == 0x370) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
      if (*param_1 != 0x30a) {
        return 0;
      }
    }
    goto LAB_ram_48040a30;
  }
  bVar4 = *(byte *)(param_1 + 1);
  if (8 < bVar4) {
    return 0;
  }
  if (param_2 == 0x11) {
    return 0x11;
  }
  if (param_3 == 0) {
    iVar2 = *param_1;
    if (iVar2 == 0x3fd) goto LAB_ram_48040b0a;
    if (iVar2 == 0x334) goto joined_r0x48040af8;
LAB_ram_48040aa6:
    if (bVar4 == 2) goto LAB_ram_48040bde;
    if (bVar4 == 8) {
      if (iVar2 != 0x3c2) {
        if ((iVar2 != 0x229) || ((param_3 != 0 && (param_3 != 0xc)))) {
          uVar1 = 0xe;
          if ((iVar2 != 0x82) && (uVar1 = 0xf, iVar2 != 0x273)) {
            uVar1 = (uint)(iVar2 == 0x339) << 4;
          }
          goto LAB_ram_48040a30;
        }
        goto LAB_ram_48040c10;
      }
      bVar4 = *(byte *)((int)param_1 + 5) & 3;
      if ((*(byte *)((int)param_1 + 5) & 3) == 1) {
        uVar1 = 6;
        goto LAB_ram_48040a30;
      }
      uVar1 = 9;
      goto joined_r0x48040a2e;
    }
  }
  else {
    if ((param_3 != 0xc) && (1 < (param_3 - 0xdU & 0xff))) {
      return 0;
    }
    iVar2 = *param_1;
    if (iVar2 == 0x3fd) {
LAB_ram_48040b0a:
      if (bVar4 == 8) {
        bVar4 = *(byte *)((int)param_1 + 5) & 7;
        if (bVar4 == 1) goto LAB_ram_48040a30;
        if (bVar4 != 2) {
          if ((*(byte *)((int)param_1 + 5) & 7) != 0) {
            return 0;
          }
          uVar1 = 0x12;
          goto LAB_ram_48040a30;
        }
        goto LAB_ram_48040b44;
      }
    }
    else {
      if (iVar2 != 0x334) goto LAB_ram_48040aa6;
joined_r0x48040af8:
      uVar1 = 5;
      if (bVar4 == 8) goto LAB_ram_48040a30;
    }
    if (bVar4 == 2) {
LAB_ram_48040bde:
      if (iVar2 != 0x213) {
        return 0;
      }
      uVar1 = 0x14;
      goto LAB_ram_48040a30;
    }
  }
  if (iVar2 == 0x229) {
    if (bVar4 == 3) {
      if ((param_3 != 0) && (param_3 != 0xc)) {
        return 0;
      }
LAB_ram_48040c10:
      return -(uint)(param_2 - 10 < 2) & param_2;
    }
  }
  else {
    if (iVar2 == 0x678) {
      if (bVar4 != 7) {
        return 0;
      }
      uVar1 = 10;
      if (param_3 == 0xc) {
        return 0;
      }
      goto LAB_ram_48040a30;
    }
    if (iVar2 == 0x249) {
      if (bVar4 != 4) {
        return 0;
      }
      uVar1 = 0xc;
      if ((param_3 != 0) && (param_3 != 0xc)) {
        return 0;
      }
      goto LAB_ram_48040a30;
    }
    if (iVar2 == 0x679) {
      if (bVar4 != 7) {
        return 0;
      }
      uVar1 = 0x15;
      goto LAB_ram_48040a30;
    }
  }
  if (iVar2 != 0x4f3) {
    return 0;
  }
  uVar1 = 0xd;
  if (1 < (byte)(bVar4 - 3)) {
    return 0;
  }
LAB_ram_48040a30:
  if ((param_2 != 0) && (uVar1 != param_2)) {
    return 0;
  }
  return uVar1;
}


