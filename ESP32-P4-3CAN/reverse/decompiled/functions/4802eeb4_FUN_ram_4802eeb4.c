/* Firmware entry: 0x4802eeb4 */

void FUN_ram_4802eeb4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6ddd8 = 1;
  DAT_ram_4ff6ddd4 = FUN_ram_48025ba6();
  if (DAT_ram_4ff6ddec == '\0') {
    DAT_ram_4ff6ddec = '\x01';
    local_20 = DAT_ram_48222d6c;
    uStack_1c = DAT_ram_48222d70;
    uStack_18 = DAT_ram_48222d74;
    uStack_14 = DAT_ram_48222d78;
    iVar2 = FUN_ram_481661ac(&local_20,&DAT_ram_4ff6ddf0);
    DAT_ram_4ff6dde8 = iVar2;
    if (iVar2 != 0) {
      local_20 = 0.0;
      goto LAB_ram_4802ef74;
    }
    DAT_ram_4ff6dde8 = FUN_ram_481664a8(DAT_ram_4ff6ddf0);
  }
  local_20 = 0.0;
  iVar2 = DAT_ram_4ff6dde8;
  if (DAT_ram_4ff6dde8 == 0) {
    if (DAT_ram_4ff6ddf0 == 0) {
      iVar2 = 0x103;
    }
    else {
      iVar2 = FUN_ram_48166564(DAT_ram_4ff6ddf0,&local_20);
      if (iVar2 == 0) {
        if (DAT_ram_4ff6dde4 == '\0') {
          DAT_ram_4ff6dde4 = '\x01';
          DAT_ram_4ff6dddc = &DAT_ram_48223000;
          DAT_ram_4ff6dde0 = &DAT_ram_48223000;
        }
        else {
          puVar1 = &DAT_ram_48223000;
          if ((int)DAT_ram_4ff6dde0 < 0x48223001) {
            puVar1 = DAT_ram_4ff6dde0;
          }
          DAT_ram_4ff6dde0 = puVar1;
          if ((int)DAT_ram_4ff6dddc < 0x48223000) {
            DAT_ram_4ff6dddc = &DAT_ram_48223000;
          }
        }
        DAT_ram_4ff6ddd0 = 1;
        DAT_ram_4ff6ddcc = &DAT_ram_48223000;
        FUN_ram_4802b80a(&DAT_ram_4ff5c678,0);
        return;
      }
    }
  }
LAB_ram_4802ef74:
  DAT_ram_4ff6ddd0 = 0;
  uVar3 = FUN_ram_480018de(iVar2);
  FUN_ram_4802ad46(&DAT_ram_4ff5c678,uVar3);
  return;
}


