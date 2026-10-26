/* Firmware entry: 0x48065460 */

void FUN_ram_48065460(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar5 = DAT_ram_4ff5ceb4;
  uVar4 = DAT_ram_4ff5ceb0;
  uVar3 = DAT_ram_4ff5ceac;
  uVar2 = DAT_ram_4ff5cea8;
  uVar1 = DAT_ram_4ff5cea4;
  iVar6 = 2;
  while (fence(), (DAT_ram_4ff5ce9c & 1) != 0) {
    if (iVar6 == 1) goto LAB_ram_4806551c;
    iVar6 = 1;
  }
  fence();
  *param_1 = DAT_ram_4ff5cea0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
LAB_ram_4806551c:
  uVar7 = FUN_ram_4ff21a0a();
  DAT_ram_4ff5cea8 = __divdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  DAT_ram_4ff5cea0 = 1;
  DAT_ram_4ff5cea4 = param_2;
  DAT_ram_4ff5ceac = param_3 + DAT_ram_4ff5cea8;
  DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  DAT_ram_4ff5ceb4 = 0;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  return;
}


