/* Firmware entry: 0x4808eff4 */

uint FUN_ram_4808eff4(int param_1,int param_2,void *param_3,uint param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_2c;
  uint uStack_28;
  uint auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4808ee96();
  if (uVar1 != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      pcVar2 = "nvs";
    }
    else {
      pcVar2 = "p4_data";
    }
    iVar3 = FUN_ram_48159fd2(pcVar2,*(undefined4 *)(param_1 + 4),0,&uStack_2c);
    if (iVar3 == 0x1102) {
LAB_ram_4808f104:
      memset(param_3,0xff,param_4);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar1;
    }
    if (iVar3 == 0) {
      memset(param_3,0xff,param_4);
      if (param_2 == 0) {
        pcVar2 = "slot0";
      }
      else {
        pcVar2 = "slot1";
      }
      uStack_28 = 0;
      iVar3 = FUN_ram_4815a556(uStack_2c,pcVar2,0,&uStack_28);
      if (iVar3 == 0x1102) {
        FUN_ram_4815a050(uStack_2c);
        goto LAB_ram_4808f104;
      }
      if (iVar3 == 0) {
        if ((param_4 < uStack_28) ||
           ((((uStack_28 != param_4 && (uStack_28 != 0x49e)) && (uStack_28 != 0x491)) &&
            (uStack_28 != 0x3d9)))) {
          FUN_ram_4815a050(uStack_2c);
          memset(param_3,0,param_4);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return uVar1;
        }
        auStack_24[0] = uStack_28;
        iVar3 = FUN_ram_4815a556(uStack_2c,pcVar2,param_3,auStack_24);
        FUN_ram_4815a050(uStack_2c);
        if (iVar3 != 0) {
          memset(param_3,0,param_4);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return (uint)(iVar3 == 0x110c);
        }
        if (auStack_24[0] == uStack_28) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return uVar1;
        }
        memset(param_3,0,param_4);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return uVar1;
      }
      FUN_ram_4815a050(uStack_2c);
    }
  }
  return 0;
}


