/* Firmware entry: 0x48124a7e */

int FUN_ram_48124a7e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_6c [6];
  undefined1 auStack_66 [33];
  undefined1 uStack_45;
  char cStack_40;
  int iStack_3c;
  uint uStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481270c0();
  if ((iVar1 == 0) || (iVar1 = thunk_FUN_ram_4800f8b8(auStack_6c), iVar1 != 0)) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481caf88);
    iVar3 = FUN_ram_4802bbe6(param_2,auStack_66);
    iVar4 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d25cc);
    iVar5 = FUN_ram_4802bc78(param_2,uStack_45,10);
    iVar6 = FUN_ram_4802bbe6(param_2,",RSSI:");
    iVar7 = thunk_FUN_ram_4802bd3e(param_2,(int)cStack_40,10);
    iVar1 = FUN_ram_4802bbe6(param_2,&DAT_ram_481caf88);
    iVar1 = iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar1;
    if ((uStack_2c & 0x40) == 0) {
      if ((uStack_2c & 4) == 0) {
        if ((uStack_2c & 2) == 0) {
          if ((uStack_2c & 1) != 0) {
            iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481b3aa4);
            iVar1 = iVar1 + iVar2;
          }
        }
        else {
          iVar2 = FUN_ram_4802bbe6(param_2,"G");
          iVar1 = iVar1 + iVar2;
        }
      }
      else {
        iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481dee24);
        iVar1 = iVar1 + iVar2;
      }
    }
    else {
      iVar2 = FUN_ram_4802bbe6(param_2,"AX");
      iVar1 = iVar1 + iVar2;
    }
    if ((uStack_2c & 8) != 0) {
      iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481caf88);
      iVar3 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d25dc);
      iVar1 = iVar1 + iVar2 + iVar3;
    }
    if (iStack_3c == 0) {
      iVar2 = FUN_ram_4802bbe6(param_2,",OPEN");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 1) {
      iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d25e8);
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 2) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 3) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA2_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 4) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA_WPA2_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 5) {
      iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d2618);
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 6) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA3_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 7) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA2_WPA3_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 8) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WAPI_PSK");
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 9) {
      iVar2 = FUN_ram_4802bbe6(param_2,&DAT_ram_481d2648);
      iVar1 = iVar1 + iVar2;
    }
    else if (iStack_3c == 10) {
      iVar2 = FUN_ram_4802bbe6(param_2,",WPA3_ENT_SUITE_B_192_BIT");
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}


