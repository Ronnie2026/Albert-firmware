/* Firmware entry: 0x48125e7c */

void FUN_ram_48125e7c(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int local_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 auStack_8c [120];
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0xc) {
    local_c0 = 0x82;
    FUN_ram_48126e00(param_1,1);
  }
  else if (param_2 == 0xd) {
    local_c0 = 0x83;
    FUN_ram_48126e18(param_1,0x1f);
  }
  else {
    if (param_2 == 0x10) {
      uStack_b3 = param_3[9];
      uStack_b2 = param_3[10];
      uStack_bc = *param_3;
      uStack_bb = param_3[1];
      uStack_ba = param_3[2];
      uStack_b9 = param_3[3];
      uStack_b8 = param_3[4];
      uStack_b7 = param_3[5];
      uStack_b6 = param_3[6];
      uStack_b5 = param_3[7];
      uStack_b4 = param_3[8];
      uStack_b1 = param_3[0xb];
      local_c0 = 0x87;
      FUN_ram_481285a8(&DAT_ram_4ff6c1a8,&local_c0);
      return;
    }
    if (param_2 == 0xe) {
      uStack_bc = *param_3;
      uStack_bb = param_3[1];
      uStack_ba = param_3[2];
      uStack_b9 = param_3[3];
      uStack_b8 = param_3[4];
      uStack_b7 = param_3[5];
      uStack_b6 = param_3[6];
      uStack_b5 = param_3[7];
      local_c0 = 0x84;
      FUN_ram_48126e00(param_1,2);
    }
    else {
      if (param_2 != 0xf) {
        return;
      }
      uStack_bc = *param_3;
      uStack_bb = param_3[1];
      uStack_ba = param_3[2];
      uStack_b9 = param_3[3];
      uStack_b8 = param_3[4];
      uStack_b7 = param_3[5];
      uStack_b6 = param_3[6];
      uStack_b5 = param_3[7];
      uStack_b4 = param_3[8];
      uStack_b3 = param_3[9];
      local_c0 = 0x85;
      iVar1 = thunk_FUN_ram_4800f97e(auStack_8c);
      if ((iVar1 != 0) || (iStack_14 == 0)) {
        FUN_ram_48126e18(param_1,2);
      }
    }
  }
  if (local_c0 < 0xcf) {
    FUN_ram_481285a8(&DAT_ram_4ff6c1a8,&local_c0);
    return;
  }
  return;
}


