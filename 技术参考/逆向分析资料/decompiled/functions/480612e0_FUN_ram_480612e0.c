/* Firmware entry: 0x480612e0 */

/* WARNING: Removing unreachable block (ram,0x48061522) */
/* WARNING: Removing unreachable block (ram,0x48061480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480612e0(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dcd1 == '\0') {
    fence();
    fence();
    if ((((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0'))
       && (iVar2 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118), iVar2 == 3)) {
      FUN_ram_48133f52(&LAB_ram_4802ce80);
      FUN_ram_48121520(0,0,"ntp.aliyun.com",0,0);
      DAT_ram_4ff6dcd1 = '\x01';
    }
  }
  uVar9 = CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18);
  uVar6 = _DAT_ram_4ff6dcd4 & 0xffffff00;
  uVar7 = _DAT_ram_4ff6dcd4 & 0xff;
  _DAT_ram_4ff6dcd4 = uVar6;
  if (uVar7 != 0) {
    local_20 = 0;
    iStack_1c = 0;
    iStack_18 = 0;
    uStack_14 = 0;
    iVar3 = FUN_ram_4819bfe2(&local_20,0);
    iVar2 = iStack_1c;
    uVar6 = local_20;
    uVar9 = CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18);
    if ((iVar3 == 0) &&
       ((0 < iStack_1c ||
        ((uVar9 = CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18), iStack_1c == 0 &&
         (uVar9 = CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18), local_20 != 0)))))) {
      lVar11 = __udivdi3(iStack_18,iStack_18 >> 0x1f,1000,0);
      lVar11 = lVar11 + CONCAT44(iVar2 * 1000 + (int)((ulonglong)uVar6 * 1000 >> 0x20),uVar6 * 1000)
      ;
      uVar12 = FUN_ram_4ff21a0a();
      uVar9 = CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18);
      if (lVar11 - 0x18cc251f400U < 0x22e6a71e400) {
        DAT_ram_4ff5be10 = (int)lVar11;
        DAT_ram_4ff5be14 = (int)((ulonglong)lVar11 >> 0x20);
        uVar9 = __udivdi3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),1000,0);
        DAT_ram_4ff5be20 = '\x02';
        DAT_ram_4ff6dcd0 = 1;
      }
    }
  }
  DAT_ram_4ff5be1c = (int)((ulonglong)uVar9 >> 0x20);
  DAT_ram_4ff5be18 = (int)uVar9;
  uVar9 = FUN_ram_4ff21a0a();
  if (DAT_ram_4ff5be20 != '\0') {
    uVar10 = __udivdi3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
    if (CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18) <= uVar10) {
      uVar8 = (uint)uVar10 - DAT_ram_4ff5be18;
      uVar6 = ((int)(uVar10 >> 0x20) - DAT_ram_4ff5be1c) - (uint)((uint)uVar10 < uVar8);
      uVar7 = (0x3bb - DAT_ram_4ff5be14) - (uint)(0x2cc3d7ff < 0x2cc3d7ffU - DAT_ram_4ff5be10);
      if ((uVar6 <= uVar7) && ((uVar6 != uVar7 || (uVar8 <= 0x2cc3d7ffU - DAT_ram_4ff5be10)))) {
        uVar7 = uVar8 + DAT_ram_4ff5be10;
        iVar2 = (uint)(uVar7 < uVar8) + uVar6 + DAT_ram_4ff5be14;
        if (uVar7 != 0 || iVar2 != 0) {
          uVar4 = FUN_ram_48025ba6();
          uVar1 = DAT_ram_4ff6dcd0;
          uVar5 = __udivdi3(uVar7,iVar2,1000,0);
          iVar2 = FUN_ram_4806124c(uVar5,uVar4,uVar1);
          if (iVar2 != 0) {
            DAT_ram_4ff6dcd0 = 0;
          }
        }
      }
    }
  }
  return;
}


