/* Firmware entry: 0x48160856 */

int FUN_ram_48160856(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    iVar4 = FUN_ram_4ff3e8de();
    param_3 = *(int *)(iVar4 + 8);
  }
  pbVar6 = param_1 + param_2;
  do {
    bVar1 = *param_1;
    iVar4 = 0;
    puVar5 = &DAT_ram_48237a9c;
    do {
      uVar3 = *puVar5;
      puVar5 = puVar5 + 3;
      if (uVar3 == bVar1) {
        bVar2 = param_1[1];
        iVar4 = (*(code *)(&PTR_FUN_ram_4815fd2a_ram_48237aa4)[iVar4 * 3])
                          (&DAT_ram_48237a9c + iVar4 * 3,param_1,param_3,uVar3,iVar4,
                           (&PTR_FUN_ram_4815fd2a_ram_48237aa4)[iVar4 * 3]);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (bVar1 == 0xff) {
          return 0;
        }
        goto joined_r0x481608e8;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xf);
    bVar2 = param_1[1];
    FUN_ram_4815fd2a(0,param_1,param_3);
joined_r0x481608e8:
    param_1 = param_1 + bVar2 + 2;
    if (pbVar6 <= param_1) {
      return 0;
    }
  } while( true );
}


