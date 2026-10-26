/* Firmware entry: 0x4801169c */

undefined4 FUN_ram_4801169c(int param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (uint *)0x0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Invalid parameters in write\n\r\n",uVar2,"serial");
    uVar2 = 0xfffffffe;
  }
  else if (((DAT_ram_4ff6db74 == 0) || (*(int *)(DAT_ram_4ff6db74 + 8) == 0)) ||
          (pcVar3 = *(code **)(*(int *)(DAT_ram_4ff6db74 + 8) + 8), pcVar3 == (code *)0x0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: serial interface not valid\n\r\n",uVar2,"serial");
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = (*pcVar3)(DAT_ram_4ff6db74,param_2,param_3 & 0xffff);
    if (iVar1 == 0) {
      *param_4 = param_3;
      uVar2 = 0;
    }
    else {
      *param_4 = 0;
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Failed to write data\n\r\n",uVar2,"serial");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


