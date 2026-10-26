/* Firmware entry: 0x48124cc0 */

void FUN_ram_48124cc0(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 2) {
    iStack_44 = 0x6e;
    FUN_ram_48126e00(param_1,1);
  }
  else if (param_2 == 3) {
    iStack_44 = 0x6f;
    FUN_ram_48126e18(param_1,0x5f);
  }
  else {
    if (param_2 == 6) {
      uStack_3b = param_3[5];
      uStack_40 = *param_3;
      uStack_3f = param_3[1];
      uStack_3e = param_3[2];
      uStack_3d = param_3[3];
      uStack_3c = param_3[4];
      uStack_39 = param_3[7];
      uStack_3a = param_3[6];
      iStack_44 = 0x72;
      FUN_ram_481285a8(&DAT_ram_4ff6c1a8,&iStack_44);
      return;
    }
    if (param_2 == 4) {
      iStack_44 = 0x70;
      FUN_ram_4ff45158(&uStack_40,param_3,0x30);
      FUN_ram_48126e00(param_1,2);
    }
    else {
      if (param_2 != 5) {
        return;
      }
      iStack_44 = 0x71;
      FUN_ram_4ff45158(&uStack_40,param_3,0x29);
      FUN_ram_48126e18(param_1,0x1e);
    }
  }
  if (iStack_44 < 0xcf) {
    FUN_ram_481285a8(&DAT_ram_4ff6c1a8,&iStack_44);
    return;
  }
  return;
}


