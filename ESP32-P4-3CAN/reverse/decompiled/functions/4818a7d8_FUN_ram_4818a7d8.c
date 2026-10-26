/* Firmware entry: 0x4818a7d8 */

int FUN_ram_4818a7d8(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar14 = *param_1 & 0xdf;
  if (uVar14 == 0x84) {
    uVar15 = param_1[2];
    uStack_44 = uVar15;
    memset(param_2 + 1,0,0x24);
    uVar14 = param_1[1];
    *param_2 = 4;
    iVar13 = FUN_ram_4817f40e(&uStack_44,uVar14 + uVar15,&uStack_48,0x30);
    if (iVar13 != 0) {
      return iVar13;
    }
    iVar13 = FUN_ram_4818a182(&uStack_44,uStack_44 + uStack_48,param_2 + 1);
    if (iVar13 == 0) {
      return 0;
    }
    return iVar13;
  }
  if (0x84 < uVar14) {
    if (uVar14 == 0x86) {
      pvVar12 = memset(param_2 + 1,0,0x24);
      *param_2 = 6;
    }
    else {
      if (uVar14 != 0x87) {
        return -0x2080;
      }
      pvVar12 = memset(param_2 + 1,0,0x24);
      uVar14 = param_1[1];
      *param_2 = 7;
      if ((uVar14 != 4) && (uVar14 != 0x10)) {
        return -0x2800;
      }
    }
LAB_ram_4818a910:
    uVar1 = *(undefined1 *)((int)param_1 + 1);
    uVar2 = *(undefined1 *)((int)param_1 + 2);
    uVar3 = *(undefined1 *)((int)param_1 + 3);
    uVar14 = param_1[1];
    uVar4 = *(undefined1 *)((int)param_1 + 5);
    uVar5 = *(undefined1 *)((int)param_1 + 6);
    uVar6 = *(undefined1 *)((int)param_1 + 7);
    uVar15 = param_1[2];
    uVar7 = *(undefined1 *)((int)param_1 + 9);
    uVar8 = *(undefined1 *)((int)param_1 + 10);
    uVar9 = *(undefined1 *)((int)param_1 + 0xb);
    *(char *)(param_2 + 1) = (char)*param_1;
    *(undefined1 *)((int)pvVar12 + 1) = uVar1;
    *(undefined1 *)((int)pvVar12 + 2) = uVar2;
    *(undefined1 *)((int)pvVar12 + 3) = uVar3;
    *(char *)((int)pvVar12 + 4) = (char)uVar14;
    *(undefined1 *)((int)pvVar12 + 5) = uVar4;
    *(undefined1 *)((int)pvVar12 + 6) = uVar5;
    *(undefined1 *)((int)pvVar12 + 7) = uVar6;
    *(char *)((int)pvVar12 + 8) = (char)uVar15;
    *(undefined1 *)((int)pvVar12 + 9) = uVar7;
    *(undefined1 *)((int)pvVar12 + 10) = uVar8;
    *(undefined1 *)((int)pvVar12 + 0xb) = uVar9;
    return 0;
  }
  if (uVar14 == 0x81) {
    pvVar12 = memset(param_2 + 1,0,0x24);
    *param_2 = 1;
    goto LAB_ram_4818a910;
  }
  if (uVar14 == 0x82) {
    pvVar12 = memset(param_2 + 1,0,0x24);
    *param_2 = 2;
    goto LAB_ram_4818a910;
  }
  if (uVar14 != 0x80) {
    return -0x2080;
  }
  uStack_48 = param_1[2];
  iVar10 = param_1[1] + uStack_48;
  iVar11 = FUN_ram_4817f40e(&uStack_48,iVar10,&iStack_4c,6);
  uVar14 = uStack_48;
  iVar13 = iStack_4c;
  if (iVar11 == 0) {
    if ((iStack_4c != 8) || (iVar11 = FUN_ram_4ff4511a(&DAT_ram_481e0ae4,uStack_48,8), iVar11 != 0))
    {
      return -0x2080;
    }
    uStack_48 = uVar14 + 8;
    iStack_40 = iVar13;
    uStack_3c = uVar14;
    uStack_44 = 6;
    iVar11 = FUN_ram_4817f40e(&uStack_48,iVar10,&iStack_4c,0xa0);
    if (iVar11 == 0) {
      if (iVar10 != uStack_48 + iStack_4c) {
        return -0x2566;
      }
      iVar11 = FUN_ram_4817f40e(&uStack_48,iVar10,&iStack_4c,0x30);
      if (iVar11 == 0) {
        if (iVar10 != uStack_48 + iStack_4c) {
          return -0x2566;
        }
        iVar11 = FUN_ram_4817f40e(&uStack_48,iVar10,&iStack_4c,6);
        if (iVar11 == 0) {
          uStack_30 = uStack_48;
          iStack_34 = iStack_4c;
          uStack_38 = 6;
          uStack_48 = uStack_48 + iStack_4c;
          iVar11 = FUN_ram_4817f40e(&uStack_48,iVar10,&iStack_4c,4);
          if (iVar11 == 0) {
            uStack_24 = uStack_48;
            iStack_28 = iStack_4c;
            uStack_2c = 4;
            if (iVar10 != uStack_48 + iStack_4c) {
              return -0x2566;
            }
            goto LAB_ram_4818a99a;
          }
        }
      }
    }
  }
  if (iVar11 + -0x2500 != 0) {
    return iVar11 + -0x2500;
  }
LAB_ram_4818a99a:
  memset(param_2,0,0x28);
  FUN_ram_4ff45158(param_2 + 1,&uStack_44,0x24);
  return 0;
}


