/* Firmware entry: 0x48123934 */

void FUN_ram_48123934(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 1) {
    uStack_40 = *param_4;
    uStack_3f = param_4[1];
    uStack_3e = param_4[2];
    uStack_3d = param_4[3];
    uStack_3c = param_4[4];
    uStack_3b = param_4[5];
    uStack_3a = param_4[6];
    uStack_39 = param_4[7];
    uStack_44 = 0x66;
  }
  else if (param_3 == 7) {
    uStack_44 = 0x8c;
  }
  else if (param_3 == 8) {
    uStack_40 = *param_4;
    uStack_3f = param_4[1];
    uStack_3e = param_4[2];
    uStack_3d = param_4[3];
    uStack_44 = 0x8d;
  }
  else if (param_3 == 9) {
    uStack_44 = 0x8e;
  }
  else if (param_3 == 10) {
    uStack_40 = *param_4;
    uStack_3f = param_4[1];
    uStack_3e = param_4[2];
    uStack_3d = param_4[3];
    uStack_3c = param_4[4];
    uStack_3b = param_4[5];
    uStack_3a = param_4[6];
    uStack_39 = param_4[7];
    uStack_44 = 0x8f;
  }
  else if (param_3 == 0xb) {
    uStack_44 = 0x90;
  }
  else {
    if (param_3 != 0x11) {
      return;
    }
    uStack_44 = 0x67;
    FUN_ram_4ff45158(&uStack_40,param_4,0x20);
  }
  FUN_ram_481285a8(&DAT_ram_4ff6c1a8,&uStack_44);
  return;
}


