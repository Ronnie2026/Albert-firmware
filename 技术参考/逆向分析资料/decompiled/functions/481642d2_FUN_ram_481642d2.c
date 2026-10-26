/* Firmware entry: 0x481642d2 */

void FUN_ram_481642d2(uint param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_24[0] = 0;
  if (param_1 < 0x9c41) {
    uVar1 = 10;
    DAT_ram_4ff4ba28 = 10;
    iVar2 = FUN_ram_481a4bb6(10,0,auStack_24);
    if (iVar2 != 0) goto LAB_ram_481643c0;
    if (param_1 != 40000) {
      if (param_1 == 20000) {
        *param_2 = 8;
        *param_3 = 0;
        uVar1 = 10;
      }
      else if (param_1 == 400) {
        *param_2 = 10;
        *param_3 = 0x14;
        uVar1 = 10;
      }
      else {
        uVar3 = auStack_24[0] / (param_1 * 1000);
        if ((int)uVar3 < 0x10) {
          if (auStack_24[0] % (param_1 * 1000) != 0) {
            uVar3 = uVar3 + 1;
          }
          *param_2 = uVar3;
          uVar1 = 10;
        }
        else {
          *param_2 = 2;
          uVar3 = (auStack_24[0] >> 1) / (param_1 * 2000);
          if ((auStack_24[0] >> 1) % (param_1 * 2000) != 0) {
            uVar3 = uVar3 + 1;
          }
          *param_3 = uVar3;
          uVar1 = 10;
        }
      }
      goto LAB_ram_48164324;
    }
LAB_ram_481643b4:
    *param_2 = 4;
    *param_3 = 0;
  }
  else {
    uVar1 = 0xf;
    DAT_ram_4ff4ba28 = 0xf;
    iVar2 = FUN_ram_481a4bb6(0xf,0,auStack_24);
    if (iVar2 != 0) {
LAB_ram_481643c0:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdmmc_host.c",0xeb,"sdmmc_host_get_clk_dividers","ret == ESP_OK");
    }
    if (param_1 == 0x32c80) {
      *param_2 = 1;
      *param_3 = 0;
    }
    else {
      if (param_1 != 100000) goto LAB_ram_481643b4;
      *param_2 = 2;
      *param_3 = 0;
    }
    uVar1 = 0xf;
  }
LAB_ram_48164324:
  *param_4 = uVar1;
  return;
}


