/* Firmware entry: 0x481a2c6a */

uint FUN_ram_481a2c6a(undefined4 *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *param_2;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 4;
  }
  else if (cVar1 == 'w') {
    uVar3 = 0x600;
    uVar4 = 1;
    uVar2 = 8;
  }
  else {
    if (cVar1 != 'a') {
      *param_1 = 0x16;
      return 0;
    }
    uVar3 = 0x208;
    uVar4 = 1;
    uVar2 = 0x108;
  }
  while( true ) {
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    if (cVar1 == '+') {
      uVar2 = uVar2 & 0xffffffe3 | 0x10;
      uVar4 = uVar4 & 0xfffffffc | 2;
    }
    else if (cVar1 == 'x') {
      uVar4 = uVar4 | 0x800;
    }
  }
  *param_3 = uVar4 | uVar3;
  return uVar2;
}


