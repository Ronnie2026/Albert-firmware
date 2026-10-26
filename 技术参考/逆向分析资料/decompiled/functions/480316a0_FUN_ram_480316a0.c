/* Firmware entry: 0x480316a0 */

bool FUN_ram_480316a0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined2 uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = FUN_ram_4803165c();
  iVar2 = FUN_ram_48121fee(&DAT_ram_4ff6deb8,"B40FOG",0,0);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = thunk_FUN_ram_481222a4(&DAT_ram_4ff6deb8,"fog_brk",(int)(uVar8 & 0xffff000000ff));
    uStack_17 = (undefined1)(uVar8 >> 8);
    iVar3 = thunk_FUN_ram_481222a4(&DAT_ram_4ff6deb8,"fog_rev",uStack_17);
    uStack_16 = (undefined1)(uVar8 >> 0x10);
    iVar4 = thunk_FUN_ram_481222a4(&DAT_ram_4ff6deb8,"fog_pilot",uStack_16);
    uStack_15 = (undefined1)(uVar8 >> 0x18);
    iVar5 = thunk_FUN_ram_481222a4(&DAT_ram_4ff6deb8,"fog_steady",uStack_15);
    iVar6 = FUN_ram_481223dc(&DAT_ram_4ff6deb8,"fog_mild",(int)((uVar8 & 0xffff000000ff) >> 0x20));
    uStack_12 = (undefined2)(uVar8 >> 0x30);
    iVar7 = FUN_ram_481223dc(&DAT_ram_4ff6deb8,"fog_hard",uStack_12);
    bVar1 = ((iVar5 != 0 && ((iVar3 != 0 && iVar2 != 0) && iVar4 != 0)) && iVar6 != 0) && iVar7 != 0
    ;
    FUN_ram_48122142(&DAT_ram_4ff6deb8);
  }
  return bVar1;
}


