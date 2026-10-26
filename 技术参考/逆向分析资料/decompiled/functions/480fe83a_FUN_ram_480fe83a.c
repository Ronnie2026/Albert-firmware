/* Firmware entry: 0x480fe83a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480fe83a(undefined1 param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auStack_14c [300];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  DAT_ram_4ff6dcbc = 1;
  if ((DAT_ram_4ff6dcc8 != 0) && (DAT_ram_4ff6dcc4 != 0)) {
    iVar5 = FUN_ram_48025ba6();
    while( true ) {
      FUN_ram_4ff3b5f0(DAT_ram_4ff6dcc4,0xffffffff);
      cVar1 = *(char *)(DAT_ram_4ff6dcc8 + 0x63fd);
      FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
      if (cVar1 == '\0') break;
      FUN_ram_4ff3c2b6(5);
      iVar6 = FUN_ram_48025ba6();
      if (-1 < iVar6 - (iVar5 + 0xdac)) {
        FUN_ram_4802ad46(&DAT_ram_4ff5c55c,"cloud_busy");
        return 0;
      }
    }
  }
  if (DAT_ram_4ff5c5ca == '\0') {
    fence();
    DAT_ram_4ff6deb4 = 0;
    fence();
    DAT_ram_4ff5c5ca = '\x01';
    DAT_ram_4ff5c5e8 = 0;
    _DAT_ram_4ff5c5c8 = 0;
    FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
    uVar4 = DAT_ram_4ff61960._2_1_;
    FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
    DAT_ram_4ff5c5b4 = uVar4;
    fence();
    fence();
    DAT_ram_4ff5c5b5 = DAT_ram_4ff6df34 != '\0';
    fence();
    fence();
    DAT_ram_4ff5c5b6 = DAT_ram_4ff6df38 != '\0';
    fence();
    fence();
    DAT_ram_4ff5c5b7 = DAT_ram_4ff47ec4 != '\0';
    uVar4 = 0;
    if (DAT_ram_4ff6df2c != (int *)0x0) {
      uVar4 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
    }
    DAT_ram_4ff5c5b8 = uVar4;
    iVar5 = DAT_ram_4ff5c614;
    DAT_ram_4ff5c5b9 = 0;
    DAT_ram_4ff5c5bb = DAT_ram_4ff5c614 != 0;
    DAT_ram_4ff5c5ba = 0;
    if ((DAT_ram_4ff5c614 == 0) ||
       (iVar7 = FUN_ram_48025ba6(), iVar6 = DAT_ram_4ff5c614, iVar5 - iVar7 < 1)) {
      DAT_ram_4ff5c5bc = 0;
    }
    else {
      iVar5 = FUN_ram_48025ba6();
      DAT_ram_4ff5c5bc = iVar6 - iVar5;
    }
    DAT_ram_4ff5c614 = 0;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff48d94,0xffffffff);
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
  _DAT_ram_4ff4b934 = _DAT_ram_4ff4b934 & 0xff;
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  fence();
  DAT_ram_4ff4a02d = 0;
  if (DAT_ram_4ff48d9c != 0) {
    FUN_ram_48047848(DAT_ram_4ff48d9c + 0x2878);
  }
  DAT_ram_4ff4a021 = param_1;
  if ((byte)(DAT_ram_4ff4a020 - 3U) < 2) {
    uVar8 = (uint)DAT_ram_4ff4a02c;
    DAT_ram_4ff4a020 = 4;
    if (uVar8 != 0) {
      puVar9 = (undefined1 *)((int)&DAT_ram_4ff494b4 + 1);
      bVar3 = false;
      do {
        piVar2 = (int *)(puVar9 + 0x7f);
        puVar9[0xe7] = 0;
        *puVar9 = 5;
        puVar9 = puVar9 + 0xf4;
        bVar3 = (bool)(bVar3 | *piVar2 != 0);
      } while ((undefined1 *)((int)&DAT_ram_4ff494b4 + uVar8 * 0xf4 + 1) != puVar9);
      if (bVar3) goto LAB_ram_480fe998;
    }
  }
  DAT_ram_4ff4a020 = 0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
  _DAT_ram_4ff4b934 = 0;
  fence();
  DAT_ram_4ff4b8d1 = 0xff;
  fence();
  DAT_ram_4ff4b8d0 = 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
LAB_ram_480fe998:
  FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
  memset(auStack_14c,0,300);
  FUN_ram_480ea70a(&DAT_ram_4ff60e20,auStack_14c,0,0);
  iVar5 = FUN_ram_480fe78a();
  if (iVar5 != 0) {
    DAT_ram_4ff5c5ba = 1;
    iVar5 = FUN_ram_48025ba6();
    while (iVar6 = FUN_ram_480e9e38(&DAT_ram_4ff60e20), iVar6 == 0) {
      iVar6 = FUN_ram_48025ba6();
      if (-1 < iVar6 - (iVar5 + 0x5dc)) {
        return 0;
      }
      thunk_FUN_ram_4ff3c2b6(1);
    }
    DAT_ram_4ff5c5b9 = 1;
    fence();
    DAT_ram_4ff6df30 = 1;
    fence();
    fence();
    DAT_ram_4ff6df34 = '\0';
    fence();
    fence();
    DAT_ram_4ff47ec4 = '\x01';
    fence();
    fence();
    DAT_ram_4ff6df38 = '\0';
    fence();
    FUN_ram_480fd37e();
    if ((DAT_ram_4ff6df2c != (int *)0x0) &&
       (iVar5 = (**(code **)(*DAT_ram_4ff6df2c + 0x138))(), iVar5 != 0)) {
      _DAT_ram_4ff5c5c8 = CONCAT11(DAT_ram_4ff5c5c9,1);
      iVar5 = (**(code **)(*DAT_ram_4ff6df2c + 0x128))(DAT_ram_4ff6df2c,0);
      _DAT_ram_4ff5c5c8 = CONCAT11((char)iVar5,DAT_ram_4ff5c5c8);
      if (iVar5 == 0) {
        return 0;
      }
    }
    iVar5 = FUN_ram_48025ba6();
    while (DAT_ram_4ff6df2c != (int *)0x0) {
      iVar6 = (**(code **)(*DAT_ram_4ff6df2c + 0x13c))();
      if (iVar6 != 0) {
        fence();
        fence();
        if (((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) != 0) ||
           (iVar6 = FUN_ram_480ea12c(&DAT_ram_4ff60e20), iVar6 == 0)) goto LAB_ram_480feaa6;
LAB_ram_480feaf2:
        if (DAT_ram_4ff6df2c == (int *)0x0) {
          return 0;
        }
        _DAT_ram_4ff5c5c8 = CONCAT11(DAT_ram_4ff5c5c9,1);
        if (DAT_ram_4ff5c5c9 == '\0') {
          iVar5 = (**(code **)(*DAT_ram_4ff6df2c + 0x128))(DAT_ram_4ff6df2c,0);
          _DAT_ram_4ff5c5c8 = CONCAT11((char)iVar5,DAT_ram_4ff5c5c8);
          if (iVar5 == 0) {
            return 0;
          }
        }
        iVar5 = FUN_ram_48025ba6();
        goto LAB_ram_480feb2c;
      }
LAB_ram_480feaa6:
      iVar6 = FUN_ram_48025ba6();
      if (-1 < iVar6 - (iVar5 + 0x5dc)) goto LAB_ram_480feaf2;
      thunk_FUN_ram_4ff3c2b6(1);
    }
  }
  return 0;
LAB_ram_480feb2c:
  iVar6 = (**(code **)(*DAT_ram_4ff6df2c + 0x13c))();
  if (iVar6 != 0) {
    fence();
    fence();
    if (((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) == 0) &&
       (iVar6 = FUN_ram_480ea12c(&DAT_ram_4ff60e20), iVar6 != 0)) {
LAB_ram_480feb60:
      iVar5 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
      if (iVar5 != 0) {
        return 0;
      }
      iVar5 = (**(code **)(*DAT_ram_4ff6df2c + 0x13c))();
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = FUN_ram_4804160c(&DAT_ram_4ff4a2b8);
      if (iVar5 != 0) {
        return 0;
      }
      iVar5 = FUN_ram_480ea12c(&DAT_ram_4ff60e20);
      if (iVar5 == 0) {
        return 0;
      }
      fence();
      fence();
      DAT_ram_4ff6deb4 = 1;
      return iVar5;
    }
  }
  iVar6 = FUN_ram_48025ba6();
  if (-1 < iVar6 - (iVar5 + 0xfa)) goto LAB_ram_480feb60;
  thunk_FUN_ram_4ff3c2b6(1);
  goto LAB_ram_480feb2c;
}


