/* Firmware entry: 0x4818a57c */

int FUN_ram_4818a57c(uint *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 - (int)*param_1 < 1) {
    return -0x24e0;
  }
  bVar1 = *(byte *)*param_1;
  iVar2 = FUN_ram_4817f830(param_1,param_2,&uStack_14);
  if (iVar2 == 0) {
    uVar3 = *param_1;
    *param_3 = (uint)bVar1;
    param_3[2] = uVar3;
    param_3[1] = uStack_14;
    *param_1 = uStack_14 + uVar3;
    return 0;
  }
  return iVar2 + -0x2480;
}


