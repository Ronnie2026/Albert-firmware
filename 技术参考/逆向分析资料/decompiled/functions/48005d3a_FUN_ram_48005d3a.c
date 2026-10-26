/* Firmware entry: 0x48005d3a */

/* WARNING: Removing unreachable block (ram,0x48005d92) */

longlong FUN_ram_48005d3a(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  lVar6 = FUN_ram_4ff4500e();
  if ((lVar6 == 0) ||
     (uVar7 = FUN_ram_481a9d86(), uVar7 < CONCAT44(DAT_ram_4ff6da94,DAT_ram_4ff6da90))) {
    DAT_ram_4ff6da94 = 0;
    DAT_ram_4ff6da90 = 0;
    return lVar6;
  }
  if (DAT_ram_4ff6da90 == 0 && DAT_ram_4ff6da94 == 0) {
    return lVar6;
  }
  uVar7 = FUN_ram_481a9d86();
  uVar1 = (uint)(uVar7 >> 6);
  uVar3 = DAT_ram_4ff6da90 >> 6 | DAT_ram_4ff6da94 << 0x1a;
  uVar4 = uVar1 - uVar3;
  iVar5 = (int)((uVar7 >> 6) >> 0x20);
  iVar2 = (iVar5 - (DAT_ram_4ff6da94 >> 6)) - (uint)(uVar1 < uVar4);
  if (iVar2 < 1) {
    if (iVar2 != 0) {
      return lVar6;
    }
    if (uVar4 == 0) {
      return lVar6;
    }
  }
  if (DAT_ram_4ff6da8c < 0) {
    iVar2 = (uint)(uVar4 + DAT_ram_4ff6da88 < DAT_ram_4ff6da88) + iVar2 + DAT_ram_4ff6da8c;
    if (iVar2 < 0) {
      lVar6 = lVar6 + CONCAT44(DAT_ram_4ff6da94 >> 6,uVar3);
      uVar3 = (uint)lVar6;
      uVar1 = uVar3 - uVar1;
      lVar6 = CONCAT44(((int)((ulonglong)lVar6 >> 0x20) - iVar5) - (uint)(uVar3 < uVar1),uVar1);
      DAT_ram_4ff6da88 = uVar4 + DAT_ram_4ff6da88;
      DAT_ram_4ff6da8c = iVar2;
      goto LAB_ram_48005e1c;
    }
  }
  else {
    uVar1 = DAT_ram_4ff6da88 - uVar4;
    iVar5 = (DAT_ram_4ff6da8c - iVar2) - (uint)(DAT_ram_4ff6da88 < uVar1);
    if ((0 < iVar5) || ((iVar5 == 0 && (uVar1 != 0)))) {
      lVar6 = lVar6 + CONCAT44(iVar2,uVar4);
      DAT_ram_4ff6da88 = uVar1;
      DAT_ram_4ff6da8c = iVar5;
      goto LAB_ram_48005e1c;
    }
  }
  lVar6 = lVar6 + CONCAT44(DAT_ram_4ff6da8c,DAT_ram_4ff6da88);
  uVar7 = 0;
LAB_ram_48005e1c:
  DAT_ram_4ff6da94 = (uint)(uVar7 >> 0x20);
  DAT_ram_4ff6da90 = (uint)uVar7;
  FUN_ram_4ff45040((int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
  return lVar6;
}


