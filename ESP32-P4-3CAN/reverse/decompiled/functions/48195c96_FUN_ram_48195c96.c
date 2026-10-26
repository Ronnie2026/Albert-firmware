/* Firmware entry: 0x48195c96 */

uint FUN_ram_48195c96(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = param_2 >> 0x14 & 0x7ff;
  uVar3 = -((int)param_2 >> 0x1f);
  uVar5 = param_1 >> 0x1d | (param_2 & 0xfffff) << 3;
  uVar4 = param_1 << 3;
  if ((uVar8 + 1 & 0x7fe) == 0) {
    uVar7 = uVar5 | uVar4;
    uVar4 = 0;
    if (uVar8 == 0) {
      iVar6 = 0;
      if (uVar7 == 0) goto LAB_ram_48195d0e;
      uVar7 = 1;
LAB_ram_48195d7e:
      uVar4 = uVar7 * 2;
      if ((uVar4 & 7) == 0) {
        iVar2 = 0;
        uVar5 = 1;
        goto LAB_ram_48195de6;
      }
      if (frm == 2) {
        if (uVar3 != 0) {
LAB_ram_48195e22:
          uVar5 = uVar4 + 8;
LAB_ram_48195e24:
          uVar5 = uVar5 >> 0x1b & 1 ^ 1;
          goto LAB_ram_48195e2e;
        }
LAB_ram_48195e44:
        iVar2 = 0;
        uVar5 = 1;
        uVar4 = 1;
      }
      else if (frm == 3) {
        if (uVar3 == 0) goto LAB_ram_48195e22;
        iVar2 = 0;
        uVar5 = uVar3;
        uVar4 = uVar3;
      }
      else {
        if (frm != 0) goto LAB_ram_48195e44;
        uVar5 = uVar4 + 4;
        if ((uVar4 & 0xf) != 4) goto LAB_ram_48195e24;
        uVar5 = 1;
LAB_ram_48195e2e:
        iVar2 = 0;
        uVar4 = 1;
      }
LAB_ram_48195e30:
      iVar6 = iVar2;
      if ((uVar7 & 7) != 0) {
        uVar4 = 1;
        if (frm == 2) {
LAB_ram_48195d3e:
          uVar7 = uVar7 + ((int)param_2 >> 0x1f) * -8;
          iVar6 = iVar2;
        }
        else {
LAB_ram_48195ce2:
          iVar6 = iVar2;
          if (frm == 3) {
            if (uVar3 == 0) {
              uVar7 = uVar7 + 8;
            }
          }
          else if ((frm == 0) && ((uVar7 & 0xf) != 4)) {
            uVar7 = uVar7 + 4;
          }
        }
      }
      if (uVar5 != 0) {
        uVar4 = uVar4 | (uVar4 & 1) << 1;
      }
LAB_ram_48195d04:
      if (-1 < (int)(uVar7 << 5)) {
        uVar7 = uVar7 >> 3;
        goto LAB_ram_48195d0e;
      }
      iVar6 = iVar6 + 1;
      if (iVar6 != 0xff) {
        uVar7 = uVar7 >> 3 & 0x1f7fffff;
        goto LAB_ram_48195d0e;
      }
      uVar7 = 0;
      iVar6 = 0xff;
      if (frm != 0) {
        if (frm == 3) {
          if (uVar3 != 0) {
LAB_ram_48195e8e:
            uVar7 = 0xffffffff;
            iVar6 = 0xfe;
          }
        }
        else if ((frm != 2) || (uVar3 == 0)) goto LAB_ram_48195e8e;
      }
      uVar4 = uVar4 | 5;
      uVar7 = uVar7 >> 3;
      if (iVar6 != 0xff) {
        iVar6 = 0xfe;
        goto LAB_ram_48195d0e;
      }
    }
    else {
      if (uVar7 == 0) goto LAB_ram_48195eb6;
      if (uVar8 == 0x7ff) {
        uVar4 = ((param_2 & 0xfffff) >> 0x13 ^ 1) << 4;
      }
      uVar7 = uVar5 | 0x400000;
    }
    bVar1 = uVar7 != 0;
    uVar7 = 0;
    if (bVar1) {
      uVar3 = 0;
      iVar6 = 0xff;
      uVar7 = 0x400000;
      goto LAB_ram_48195d0e;
    }
  }
  else {
    iVar2 = uVar8 - 0x380;
    iVar6 = 0xfe;
    if (iVar2 < 0xff) {
      if (iVar2 < 1) {
        uVar7 = 1;
        if (-0x18 < iVar2) {
          uVar5 = uVar5 | 0x800000;
          uVar7 = 0x1e - iVar2;
          if ((int)uVar7 < 0x20) {
            uVar7 = uVar4 >> (uVar7 & 0x1f) |
                    (uint)(uVar4 << (uVar8 - 0x37e & 0x1f) != 0) | uVar5 << (uVar8 - 0x37e & 0x1f);
          }
          else {
            iVar6 = 0;
            if (uVar7 != 0x20) {
              iVar6 = uVar5 << (uVar8 - 0x35e & 0x1f);
            }
            uVar7 = uVar5 >> (-iVar2 - 2U & 0x1f) | (uint)(iVar6 != 0 || uVar4 != 0);
          }
        }
        goto LAB_ram_48195d7e;
      }
      uVar7 = (uint)((param_1 & 0x3ffffff) != 0) | uVar5 << 3 | (param_1 & 0x1fffffff) >> 0x1a;
      uVar5 = 0;
LAB_ram_48195de6:
      uVar4 = 0;
      goto LAB_ram_48195e30;
    }
    if (frm != 0) {
      if (frm != 3) {
        if (frm == 2) {
          if (uVar3 != 0) goto LAB_ram_48195eb2;
          uVar5 = 0;
          uVar7 = 0xffffffff;
          iVar2 = 0xfe;
          uVar4 = 5;
          goto LAB_ram_48195d3e;
        }
        uVar7 = 0xffffffff;
        uVar4 = 5;
        goto LAB_ram_48195d04;
      }
      if (uVar3 != 0) {
        uVar7 = 0xffffffff;
        uVar5 = 0;
        iVar2 = 0xfe;
        uVar4 = 5;
        goto LAB_ram_48195ce2;
      }
    }
LAB_ram_48195eb2:
    uVar7 = 0;
    uVar4 = 5;
  }
LAB_ram_48195eb6:
  iVar6 = 0xff;
LAB_ram_48195d0e:
  if (uVar4 != 0) {
    fflags = fflags | uVar4;
  }
  return uVar7 & 0x7fffff | iVar6 << 0x17 | uVar3 << 0x1f;
}


