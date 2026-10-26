/* Firmware entry: 0x480fed16 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480fed16(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
  bVar1 = DAT_ram_4ff5c5ca;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = (uint)DAT_ram_4ff5c5ca;
  if (uVar6 == 0) {
    return 0;
  }
  fence();
  DAT_ram_4ff6deb4 = 0;
  fence();
  DAT_ram_4ff5c5e8 = 0;
  if (DAT_ram_4ff6df2c == (int *)0x0) {
    if (DAT_ram_4ff5c5b9 == '\0') {
      if (DAT_ram_4ff5c5ba != '\0') {
        DAT_ram_4ff5c5b9 = '\x01';
        DAT_ram_4ff5c5ba = '\x01';
      }
    }
    else {
      DAT_ram_4ff5c5ba = '\x01';
    }
LAB_ram_480fee94:
    fence();
    DAT_ram_4ff6df34 = 0;
    fence();
    fence();
    DAT_ram_4ff6df38 = 0;
    fence();
    fence();
    DAT_ram_4ff47ec4 = 1;
    fence();
    fence();
    DAT_ram_4ff6df30 = 1;
    fence();
    fence();
    DAT_ram_4ff6deb4 = 0;
    fence();
    fence();
    uVar5 = uVar6;
    if (DAT_ram_4ff6a5a9 == '\0') goto LAB_ram_480ff114;
LAB_ram_480feef0:
    DAT_ram_4ff5c5b9 = bVar1;
    FUN_ram_480fd37e();
    _DAT_ram_4ff5c5c8 = CONCAT11(DAT_ram_4ff5c5c9,1);
    if (DAT_ram_4ff6df2c != (int *)0x0) goto LAB_ram_480fef06;
LAB_ram_480ff138:
    bVar1 = 0;
  }
  else {
    iVar2 = FUN_ram_480fdea6(&DAT_ram_4ff60e20);
    if (iVar2 == 0) {
      if ((DAT_ram_4ff5c5b9 != '\0') || (DAT_ram_4ff5c5ba != '\0')) {
        DAT_ram_4ff5c5b9 = '\x01';
        DAT_ram_4ff5c5ba = '\x01';
      }
      if ((DAT_ram_4ff6df2c != (int *)0x0) && (DAT_ram_4ff5c5b8 != '\0')) {
        (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
      }
      goto LAB_ram_480fee94;
    }
    if ((DAT_ram_4ff5c5b9 == '\0') && (DAT_ram_4ff5c5ba == '\0')) {
joined_r0x480ff08e:
      if (DAT_ram_4ff6df2c != (int *)0x0) {
        if (DAT_ram_4ff5c5b8 == '\0') goto LAB_ram_480fedcc;
        if (DAT_ram_4ff5c5c8 == '\0') {
          if (DAT_ram_4ff6df2c == (int *)0x0) goto LAB_ram_480fedcc;
          iVar3 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
        }
        else {
          iVar3 = (**(code **)(*DAT_ram_4ff6df2c + 0x128))(DAT_ram_4ff6df2c,1);
          if ((DAT_ram_4ff6df2c != (int *)0x0) &&
             (cVar7 = DAT_ram_4ff5c5b8, DAT_ram_4ff5c5b8 != '\0')) goto LAB_ram_480fedb8;
        }
        if (iVar3 != 0) {
LAB_ram_480fedcc:
          fence();
          DAT_ram_4ff6df38 = DAT_ram_4ff5c5b6;
          fence();
          fence();
          DAT_ram_4ff47ec4 = DAT_ram_4ff5c5b7;
          fence();
          fence();
          DAT_ram_4ff6df34 = DAT_ram_4ff5c5b5;
          fence();
          DAT_ram_4ff5c5ca = 0;
          fence();
          DAT_ram_4ff6df30 = 0;
          fence();
          if (DAT_ram_4ff5c5bb != '\0') {
            iVar3 = 0;
            if (DAT_ram_4ff5c5bc != 0) {
              iVar3 = FUN_ram_48025ba6();
              iVar3 = DAT_ram_4ff5c5bc + iVar3;
            }
            DAT_ram_4ff5c5bb = '\0';
            DAT_ram_4ff5c5bc = 0;
            DAT_ram_4ff5c614 = iVar3;
          }
          if (param_1 != 0) {
            DAT_ram_4ff5c5c0 = 0;
            DAT_ram_4ff5c5cb = 0;
            DAT_ram_4ff5c5d4 = 0;
            DAT_ram_4ff5c5e4 = 0;
          }
          _DAT_ram_4ff5c5c8 = 0;
          DAT_ram_4ff5c5e8 = 0;
          fence();
          fence();
          if (DAT_ram_4ff6df38 != '\0') {
            (**(code **)(*DAT_ram_4ff6df2c + 0x148))(DAT_ram_4ff6df2c,1);
            (**(code **)(*DAT_ram_4ff6df2c + 0x14c))();
            return iVar2;
          }
          _DAT_ram_4ff5c5c8 = 0;
          DAT_ram_4ff5c5e8 = 0;
          return iVar2;
        }
      }
    }
    else {
      iVar3 = FUN_ram_480fe19a(&DAT_ram_4ff60e20);
      if (iVar3 != 0) {
        DAT_ram_4ff5c5b9 = '\0';
        DAT_ram_4ff5c5ba = '\0';
        goto joined_r0x480ff08e;
      }
      DAT_ram_4ff5c5b9 = '\x01';
      DAT_ram_4ff5c5ba = '\x01';
      if ((DAT_ram_4ff6df2c != (int *)0x0) && (DAT_ram_4ff5c5b8 != '\0')) {
        iVar3 = 0;
        cVar7 = '\0';
LAB_ram_480fedb8:
        iVar4 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
        if ((iVar4 != 0) && ((iVar3 != 0 && (cVar7 != '\0')))) goto LAB_ram_480fedcc;
      }
    }
    fence();
    DAT_ram_4ff6df34 = 0;
    fence();
    fence();
    DAT_ram_4ff6df38 = 0;
    fence();
    fence();
    DAT_ram_4ff47ec4 = 1;
    fence();
    fence();
    DAT_ram_4ff6df30 = 1;
    fence();
    fence();
    DAT_ram_4ff6deb4 = 0;
    fence();
    uVar5 = FUN_ram_480fe78a();
    fence();
    if (DAT_ram_4ff6a5a9 != '\0') goto LAB_ram_480feef0;
LAB_ram_480ff114:
    uVar6 = FUN_ram_480e9e38(&DAT_ram_4ff60e20);
    DAT_ram_4ff5c5b9 = (byte)uVar6;
    FUN_ram_480fd37e();
    _DAT_ram_4ff5c5c8 = CONCAT11(DAT_ram_4ff5c5c9,1);
    if (DAT_ram_4ff6df2c == (int *)0x0) goto LAB_ram_480ff138;
LAB_ram_480fef06:
    iVar2 = (**(code **)(*DAT_ram_4ff6df2c + 0x128))(DAT_ram_4ff6df2c,0);
    if (iVar2 == 0) goto LAB_ram_480ff138;
    bVar1 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
    bVar1 = bVar1 ^ 1;
  }
  _DAT_ram_4ff5c5c8 = CONCAT11(bVar1,DAT_ram_4ff5c5c8);
  iVar2 = FUN_ram_48025ba6();
  while (DAT_ram_4ff6df2c != (int *)0x0) {
    iVar3 = (**(code **)(*DAT_ram_4ff6df2c + 0x13c))();
    if (iVar3 != 0) {
      fence();
      fence();
      if (((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) != 0) ||
         (iVar3 = FUN_ram_480ea12c(&DAT_ram_4ff60e20), iVar3 == 0)) goto LAB_ram_480fef4e;
LAB_ram_480fef9a:
      if (DAT_ram_4ff6df2c != (int *)0x0) {
        if ((uVar6 == 0) || (DAT_ram_4ff5c5c9 == '\0')) {
LAB_ram_480ff058:
          DAT_ram_4ff5c5e8 = 1;
          (**(code **)(*DAT_ram_4ff6df2c + 0x134))();
          uVar6 = (uint)DAT_ram_4ff5c5e8;
        }
        else {
          iVar2 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
          if ((iVar2 != 0) || (iVar2 = (**(code **)(*DAT_ram_4ff6df2c + 0x13c))(), iVar2 == 0)) {
LAB_ram_480ff04a:
            DAT_ram_4ff5c5e8 = 1;
            if (DAT_ram_4ff6df2c != (int *)0x0) goto LAB_ram_480ff058;
            goto LAB_ram_480ff144;
          }
          fence();
          fence();
          if (((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) != 0) ||
             (iVar2 = FUN_ram_480ea12c(&DAT_ram_4ff60e20), iVar2 == 0)) goto LAB_ram_480ff04a;
          fence();
          DAT_ram_4ff6deb4 = 1;
          fence();
          uVar6 = (uVar5 ^ 1) & 0xff;
          DAT_ram_4ff5c5e8 = (byte)(uVar5 ^ 1);
        }
        if (uVar6 == 0) goto joined_r0x480ff068;
        goto LAB_ram_480ff144;
      }
      break;
    }
LAB_ram_480fef4e:
    iVar3 = FUN_ram_48025ba6();
    if (-1 < iVar3 - (iVar2 + 0x5dc)) goto LAB_ram_480fef9a;
    thunk_FUN_ram_4ff3c2b6(1);
  }
  DAT_ram_4ff5c5e8 = 1;
LAB_ram_480ff144:
  iVar2 = FUN_ram_48025ba6();
  DAT_ram_4ff5c5e0 = iVar2 + 0xfa;
  DAT_ram_4ff5c5e4 = 1;
joined_r0x480ff068:
  if (param_1 == 0) {
    return 0;
  }
  DAT_ram_4ff5c548 = 4;
  FUN_ram_4802ad46(&DAT_ram_4ff5c56c,"can_restore");
  if ((char)DAT_ram_4ff5c56b < '\0') {
    uVar6 = DAT_ram_4ff5c56b & 0x7f;
  }
  else {
    uVar6 = DAT_ram_4ff5c564;
    if (DAT_ram_4ff5c55c == 0) goto LAB_ram_480ff186;
  }
  if (uVar6 != 0) {
    return 0;
  }
LAB_ram_480ff186:
  FUN_ram_4802ad46(&DAT_ram_4ff5c55c,"can_restore");
  return 0;
}


