/* Firmware entry: 0x48125c34 */

int FUN_ram_48125c34(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_144 [120];
  undefined4 uStack_cc;
  undefined1 auStack_c8 [97];
  undefined1 uStack_67;
  int iStack_64;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481270c0();
  if ((iVar1 == 0) || (iVar1 = thunk_FUN_ram_4800f76e(1,auStack_c8), iVar1 != 0)) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481caf88);
    iVar3 = FUN_ram_4802bbe6(param_2,auStack_c8);
    iVar4 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d25cc);
    iVar1 = FUN_ram_4802bc78(param_2,uStack_67,10);
    iVar1 = iVar2 + iVar3 + iVar4 + iVar1;
    if (iStack_64 == 0) {
      iVar2 = FUN_ram_4802bbe6(param_2,",OPEN");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 1) {
      iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d25e8);
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 2) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 3) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA2_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 4) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA_WPA2_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 5) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WEAP");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 6) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA3_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 7) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA2_WPA3_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 8) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WAPI_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 9) {
      iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d2648);
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_64 == 10) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA3_ENT_SUITE_B_192_BIT");
      iVar1 = iVar1 + iVar2;
    }
    iVar2 = thunk_FUN_ram_4800f97e(auStack_144);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4802bbe6(param_2,",STA:");
      iVar3 = thunk_FUN_ram_4802bd3e(param_2,uStack_cc,10);
      iVar1 = iVar1 + iVar2 + iVar3;
    }
  }
  return iVar1;
}


