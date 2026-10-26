/* Firmware entry: 0x48072e0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_48072e0a(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uStack_7f1;
  undefined4 uStack_7f0;
  int iStack_7ec;
  int iStack_7e8;
  undefined4 local_7e4 [163];
  undefined1 auStack_558 [660];
  char acStack_2c4 [664];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dd68 == '\0') {
    return 0;
  }
  memset(auStack_558,0,0x291);
  memset(acStack_2c4,0,0x291);
  iVar2 = FUN_ram_48072aac(param_1,auStack_558);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_ram_48025b94();
  fence();
  fence();
  if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar2 - DAT_ram_4ff6deec))) ||
     (2000000 < (uint)(iVar2 - DAT_ram_4ff6def0))) {
    fence();
    DAT_ram_4ff6def0 = iVar2;
  }
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
  iVar3 = FUN_ram_48159fd2("p4_data","p4_cloud",1,&uStack_7f0);
  uVar1 = 0;
  if (iVar3 != 0) goto LAB_ram_48072f6c;
  iVar3 = FUN_ram_4815a218(uStack_7f0,"config1",auStack_558,0x291);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_4815a1c4(uStack_7f0);
    iStack_7ec = 0x291;
    if (iVar3 != 0) goto LAB_ram_48072f02;
    iVar3 = FUN_ram_4815a556(uStack_7f0,"config1",acStack_2c4,&iStack_7ec);
    FUN_ram_4815a050(uStack_7f0);
    puVar9 = &DAT_ram_482230e4;
    puVar8 = local_7e4;
    do {
      uVar11 = puVar9[1];
      uVar10 = puVar9[2];
      uVar4 = puVar9[3];
      uVar6 = puVar9[4];
      *puVar8 = *puVar9;
      uVar7 = puVar9[5];
      puVar8[1] = uVar11;
      puVar8[2] = uVar10;
      puVar8[3] = uVar4;
      puVar8[4] = uVar6;
      puVar8[5] = uVar7;
      puVar9 = puVar9 + 6;
      puVar8 = puVar8 + 6;
    } while (puVar9 != (undefined4 *)&DAT_ram_4822336c);
    *puVar8 = _DAT_ram_4822336c;
    if (((iVar3 != 0) || (iStack_7ec != 0x291)) ||
       ((iVar3 = FUN_ram_4ff4511a(auStack_558,acStack_2c4,0x291), iVar3 != 0 ||
        (iVar3 = FUN_ram_48072c5c(acStack_2c4,0x291,local_7e4), iVar3 == 0))))
    goto LAB_ram_48072f48;
    uVar1 = (uint)DAT_ram_4ff47e64;
    if (uVar1 == 0) {
      uStack_7f1 = 1;
      uVar5 = FUN_ram_480357d6("p4_cloud","_ready",&uStack_7f1,1);
      if (uVar5 != 0) {
        iStack_7e8 = 0;
        iVar3 = FUN_ram_48030cb4(1,"p4_cloud","_ready",acStack_2c4,0x291,&iStack_7e8);
        if (((iVar3 == 1) && (iStack_7e8 == 1)) && (acStack_2c4[0] == '\x01')) {
          _DAT_ram_4ff47e64 = &sedeleg;
          uVar1 = uVar5;
        }
      }
    }
  }
  else {
LAB_ram_48072f02:
    iStack_7ec = 0x291;
    FUN_ram_4815a050(uStack_7f0);
    puVar9 = &DAT_ram_482230e4;
    puVar8 = local_7e4;
    do {
      uVar11 = puVar9[1];
      uVar10 = puVar9[2];
      uVar4 = puVar9[3];
      uVar6 = puVar9[4];
      uVar7 = puVar9[5];
      *puVar8 = *puVar9;
      puVar8[1] = uVar11;
      puVar8[2] = uVar10;
      puVar8[3] = uVar4;
      puVar8[4] = uVar6;
      puVar8[5] = uVar7;
      puVar9 = puVar9 + 6;
      puVar8 = puVar8 + 6;
    } while (puVar9 != (undefined4 *)&DAT_ram_4822336c);
    *puVar8 = _DAT_ram_4822336c;
LAB_ram_48072f48:
    uVar1 = 0;
  }
  memset(auStack_558,0,0x291);
  memset(acStack_2c4,0,0x291);
LAB_ram_48072f6c:
  DAT_ram_4ff6deec = FUN_ram_48025b94();
  fence();
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
  DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
  if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar2)) {
    DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar2;
  }
  return uVar1;
}


