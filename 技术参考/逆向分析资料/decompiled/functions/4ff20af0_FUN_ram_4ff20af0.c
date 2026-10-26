/* Firmware entry: 0x4ff20af0 */

int FUN_ram_4ff20af0(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_28;
  uint auStack_24 [4];
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_14 = 4;
  uStack_28 = param_3;
  auStack_24[0] = param_2;
  FUN_ram_4ff2c374(&uStack_14,auStack_24,&uStack_28);
  if (param_1 == 0) {
    iVar2 = FUN_ram_4ff20a12(uStack_14,auStack_24[0],uStack_28);
  }
  else if (auStack_24[0] == 0) {
    FUN_ram_4ff209c6(param_1);
    iVar2 = 0;
  }
  else {
    puVar1 = DAT_ram_4ff6d9b0;
    if (auStack_24[0] < 0x4000001) {
      while( true ) {
        if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("heap_caps_base.c",0xfb,"heap_caps_realloc_base",
                           "heap != NULL && \"realloc() pointer is outside heap areas\"");
        }
        if (((puVar1[7] != 0) && ((int)puVar1[3] <= param_1)) && (param_1 < (int)puVar1[4])) break;
        puVar1 = (uint *)puVar1[8];
      }
      if (((uStack_28 == ((*puVar1 | puVar1[1] | puVar1[2]) & uStack_28)) && (uStack_14 < 5)) &&
         (iVar2 = FUN_ram_4ff433c2(puVar1[7],param_1,auStack_24[0]), iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = FUN_ram_4ff20a12(uStack_14,auStack_24[0],uStack_28);
      if (iVar2 != 0) {
        uVar3 = FUN_ram_4ff43330(puVar1[7],param_1);
        if (uVar3 != 0) {
          uVar4 = auStack_24[0];
          if (uVar3 < auStack_24[0]) {
            uVar4 = uVar3;
          }
          FUN_ram_4ff45158(iVar2,param_1,uVar4);
          FUN_ram_4ff209c6(param_1);
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("heap_caps_base.c",0x134,"heap_caps_realloc_base","old_size > 0");
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


